#include <math.h>
#include "Calibration.h"
#include "RobControl.h"
#include "Frame.h"

double Norm(double a[4], int i)
{ //norm of vector a starting from element i
    double norm = 0;
    int j;
    for (j=i;j<4;j++) norm+=(a[j]*a[j]);
    return sqrt(norm);
}

unsigned short ToolCalibration(Point_Type P[5], Coord_Type *Result)
{

    unsigned short status = 0;
    
    //build matrix A
    double A[4][4];
    
    A[0][0] = 2 * (P[0].Axes[0] - P[1].Axes[0]);
    A[0][1] = 2 * (P[0].Axes[1] - P[1].Axes[1]);
    A[0][2] = 2 * (P[0].Axes[2] - P[1].Axes[2]);
    A[0][3] = P[0].Axes[0]*P[0].Axes[0] - P[1].Axes[0]*P[1].Axes[0] + P[0].Axes[1]*P[0].Axes[1] - P[1].Axes[1]*P[1].Axes[1] + P[0].Axes[2]*P[0].Axes[2] - P[1].Axes[2]*P[1].Axes[2];
    
    A[1][0] = 2 * (P[0].Axes[0] - P[2].Axes[0]);
    A[1][1] = 2 * (P[0].Axes[1] - P[2].Axes[1]);
    A[1][2] = 2 * (P[0].Axes[2] - P[2].Axes[2]);
    A[1][3] = P[0].Axes[0]*P[0].Axes[0] - P[2].Axes[0]*P[2].Axes[0] + P[0].Axes[1]*P[0].Axes[1] - P[2].Axes[1]*P[2].Axes[1] + P[0].Axes[2]*P[0].Axes[2] - P[2].Axes[2]*P[2].Axes[2];

    A[2][0] = 2 * (P[0].Axes[0] - P[3].Axes[0]);
    A[2][1] = 2 * (P[0].Axes[1] - P[3].Axes[1]);
    A[2][2] = 2 * (P[0].Axes[2] - P[3].Axes[2]);
    A[2][3] = P[0].Axes[0]*P[0].Axes[0] - P[3].Axes[0]*P[3].Axes[0] + P[0].Axes[1]*P[0].Axes[1] - P[3].Axes[1]*P[3].Axes[1] + P[0].Axes[2]*P[0].Axes[2] - P[3].Axes[2]*P[3].Axes[2];

    A[3][0] = 2 * (P[0].Axes[0] - P[4].Axes[0]);
    A[3][1] = 2 * (P[0].Axes[1] - P[4].Axes[1]);
    A[3][2] = 2 * (P[0].Axes[2] - P[4].Axes[2]);
    A[3][3] = P[0].Axes[0]*P[0].Axes[0] - P[4].Axes[0]*P[4].Axes[0] + P[0].Axes[1]*P[0].Axes[1] - P[4].Axes[1]*P[4].Axes[1] + P[0].Axes[2]*P[0].Axes[2] - P[4].Axes[2]*P[4].Axes[2];

    //triangulate matrix A
    status = Triangulate(A);
    if (status != 0) return status;
    
    //solve for TCP.xyz
    double TCP[6];
    if(fabs(A[0][0])<TRF_EPSILON || fabs(A[1][1])<TRF_EPSILON || fabs(A[2][2])<TRF_EPSILON)
    {
        return ERR_CALIBRATION;
    }
    else
    {
        TCP[2] = A[2][3]/A[2][2];
        TCP[1] = (A[1][3]-TCP[2]*A[1][2])/A[1][1];
        TCP[0] = (A[0][3]-TCP[2]*A[0][2]-TCP[1]*A[0][1])/A[0][0];
        TCP[3] = P[0].Axes[3];
        TCP[4] = P[0].Axes[4];
        TCP[5] = P[0].Axes[5];
    }
    
    //calculate tool size
    double Tool[6];
    AddFrame3D(TCP,P[0].Axes,P[0].Axes[3],P[0].Axes[4],P[0].Axes[5],Tool);
    
    (*Result).X = Tool[0]; 
    (*Result).Y = Tool[1]; 
    (*Result).Z = Tool[2]; 

    return 0;

}


unsigned short Triangulate(double A[4][4])
{

    int i,j,k;
    double v[4];
    double e[4] = {1,0,0,0};
    double u[4];
    double h[4];
    double B[4][4];

    for (i=0;i<3;i++)
    {
        for (j=i;j<4;j++) v[j]=A[j][i];
        e[i]=Norm(v,i)*sign(v[i]);
        for (j=i;j<4;j++) u[j]=v[j]+e[j];
        double u_n = Norm(u,i);
        if(fabs(u_n)<TRF_EPSILON) return ERR_CALIBRATION;
        for (j=i;j<4;j++) u[j]=u[j]/u_n;
        
        //h = uT * A
        for (j=i;j<4;j++)
        {
            h[j] = 0;
            for (k=i;k<4;k++) h[j]+=u[k]*A[k][j];
        }

        //B = u * h
        for (j=i;j<4;j++)
        {
            for (k=i;k<4;k++)
            {
                B[j][k]=u[j]*h[k];
            }
        }


        //A = A-2B
        for (j=i;j<4;j++)
        {
            for (k=i;k<4;k++)
            {
                A[j][k]=A[j][k]-2*B[j][k];
            }
        }

    }

    return 0;
}
