#ifndef ROB_CONTROL_H
#define ROB_CONTROL_H

/* Declaration of global constants, datatypes and functions for the RobControl library */ 

#define MAX_PRG_SIZE 10000
#define ERR_SINGULARITY 1280
#define ERR_COLL_INTER 1271
#define ERR_COLL_SELF 1270
#define ERR_OPTMOT 1260
#define ERR_TRK2 1251
#define ERR_TRK1 1250
#define ERR_LIMIT_VEL_A6 1235
#define ERR_LIMIT_VEL_A5 1234
#define ERR_LIMIT_VEL_A4 1233
#define ERR_LIMIT_VEL_A3 1232
#define ERR_LIMIT_VEL_A2 1231
#define ERR_LIMIT_VEL_A1 1230
#define ERR_LIMIT_A6 1225
#define ERR_LIMIT_A5 1224
#define ERR_LIMIT_A4 1223
#define ERR_LIMIT_A3 1222
#define ERR_LIMIT_A2 1221
#define ERR_LIMIT_A1 1220
#define ERR_SPG_LIMIT_JERK 1208
#define ERR_SPG_LIMIT_ACC 1207
#define ERR_SPG_LIMIT_VEL 1206
#define ERR_SPG_LIMIT_POS 1205
#define ERR_SPG_DYNCALC 1204
#define ERR_SPG_LIMITS_REACHED 1203
#define ERR_SPG_OVERRIDE 1202
#define ERR_SPG_CYCLETIME 1201
#define ERR_SPG 1200
#define ERR_LIMIT_VEL_J6 1192
#define ERR_LIMIT_VEL_J5 1191
#define ERR_LIMIT_VEL_J4 1190
#define ERR_LIMIT_VEL_J3 1189
#define ERR_LIMIT_VEL_J2 1188
#define ERR_LIMIT_VEL_J1 1187
#define ERR_LIMIT_J6 1186
#define ERR_LIMIT_J5 1185
#define ERR_LIMIT_J4 1184
#define ERR_LIMIT_J3 1183
#define ERR_LIMIT_J2 1182
#define ERR_LIMIT_J1 1181
#define ERR_LIMIT_C 1176
#define ERR_LIMIT_B 1175
#define ERR_LIMIT_A 1174
#define ERR_LIMIT_Z 1173
#define ERR_LIMIT_Y 1172
#define ERR_LIMIT_X 1171
#define ERR_WORKSPACE_ZONE10 1169
#define ERR_WORKSPACE_ZONE9 1168
#define ERR_WORKSPACE_ZONE8 1167
#define ERR_WORKSPACE_ZONE7 1166
#define ERR_WORKSPACE_ZONE6 1165
#define ERR_WORKSPACE_ZONE5 1164
#define ERR_WORKSPACE_ZONE4 1163
#define ERR_WORKSPACE_ZONE3 1162
#define ERR_WORKSPACE_ZONE2 1161
#define ERR_WORKSPACE_ZONE1 1160
#define ERR_PP_CIRCLE_MIDDLEPOINT 1152
#define ERR_PP_CIRCLE_LENGTH 1151
#define ERR_PP_CIRCLEPOINTS 1150
#define ERR_IP_IF 1119
#define ERR_IP_IO_INDEX 1118
#define ERR_IP_TANG 1117
#define ERR_IP_SUBLEVEL 1116
#define ERR_IP_JUMP 1115
#define ERR_IP_TRK_INDEX 1114
#define ERR_IP_LABEL 1113
#define ERR_IP_NOBLOCKS 1112
#define ERR_IP_FEEDRATE 1111
#define ERR_IP_MFUNCINDEX 1110
#define ERR_IP_FRAMEINDEX 1109
#define ERR_IP_TOOLINDEX 1108
#define ERR_IP_POINTINDEX 1107
#define ERR_IP_MAXMFUNC 1106
#define ERR_IP_NOCENTER 1105
#define ERR_IP_NOPOINT 1104
#define ERR_IP_CONFLICT 1103
#define ERR_IP_SYNTAX 1102
#define ERR_IP_COMMENT 1101
#define ERR_IP_EMPTYSTRING 1100
#define ERR_FILE_NOMEMORY 1054
#define ERR_FILE_END 1053
#define ERR_FILE_EMPTY 1052
#define ERR_FILE_NOT_FOUND 1051
#define ERR_NOT_SUPPORTED 1050
#define ERR_CALIBRATION 1030
#define ERR_TRF_ROT 1027
#define ERR_TRF_AXESNUM 1026
#define ERR_TRF_POINTER 1025
#define ERR_TRF_POSE 1024
#define ERR_TRF_MECH_NOT_SUPPORTED 1023
#define ERR_TRF_WORKSPACE 1022
#define ERR_TRF_MECH 1021
#define ERR_TRF_MODE 1020
#define ERR_WRONG_AUX_LIMITS 1017
#define ERR_POINT_TYPE 1016
#define ERR_UNITS_SCALING 1015
#define ERR_WRONG_JOINT_LIMITS 1014
#define ERR_JOG_GOTOPOS 1013
#define ERR_JOG_PAR 1012
#define ERR_ROBOT_LICENSE 1011
#define ERR_MAX_ROBOTS 1010
#define ERR_CHECKSUM 1006
#define ERR_CYCLETIME 1005
#define MAX_POINT 200
#define MAX_IO 100
#define MAX_RPAR 100
#define MAX_MFUNC 100
#define MAX_BLOCK_SIZE 100
#define MAX_LOOP_COUNT 100
#define RING_BUFFER_SIZE 100
#define ERR_DISABLED 99
#define MAX_FRAME 20
#define MAX_TOOL 20
#define MAX_ERR 20
#define BUFFER_LENGTH 20
#define USER 10
#define MAX_ZONE 10
#define MAX_MFUNC_INLINE 10
#define TRF_POSE_NEGATIVE 8
#define MAX_ROBOTS 8
#define UR 8
#define ARM 6
#define RTCP 5
#define PALLETIZER 4
#define TRF_POSE_BACK 4
#define ZONE_ORIENTATION 3
#define DELTA 3
#define TRF_POSE_CONCAVE 2
#define ZONE_FORBIDDEN 2
#define JOG_GOTO 2
#define JOG_AUX 3
#define JOG_TOOL 2
#define JOG_BASE 1
#define TRF_POSE_LEFT 1
#define TRF_INVERSE 1
#define POINT_PATH 1
#define ZONE_SAFE 1
#define SCARA 1
#define JOG_NEGATIVE 1
#define CNC 0
#define JOG_JOINTS 0
#define JOG_POSITIVE 0
#define ZONE_DISABLED 0
#define POINT_JOINTS 0
#define TRF_POSE_CONVEX 0
#define TRF_POSE_POSITIVE 0
#define TRF_POSE_FRONT 0
#define TRF_DIRECT 0
#define TRF_POSE_RIGHT 0
#define STATUS_OK 0


typedef enum Robot_Monitor_State_Type
{	STANDSTILL_STATE = 0,
	MANUAL = 10,
	AUTO = 20,
	ERROR_STATE = 255
} Robot_Monitor_State_Type;

typedef struct Robot_Command_Type
{	unsigned short RunProgram;
	unsigned short RunBlocks;
	unsigned short Stop;
	unsigned short Halt;
	unsigned short Continue;
	unsigned short JogAxis;
	unsigned short Reference;
	unsigned short Reset;
} Robot_Command_Type;

typedef struct Robot_Parameter_JointLimits_Type
{	double PositionPos;
	double PositionNeg;
	double VelocityPos;
	double VelocityNeg;
	double AccelerationPos;
	double AccelerationNeg;
	double JerkPos;
	double JerkNeg;
} Robot_Parameter_JointLimits_Type;

typedef struct Robot_Parameter_PathLimits_Type
{	double Velocity;
	double Acceleration;
	double Jerk;
} Robot_Parameter_PathLimits_Type;

typedef struct Robot_Parameter_Path_Type
{	struct Robot_Parameter_PathLimits_Type Linear;
	struct Robot_Parameter_PathLimits_Type Angular;
} Robot_Parameter_Path_Type;

typedef struct Robot_Parameter_Workspace_Type
{	unsigned char Type;
	double PositionMin[3];
	double PositionMax[3];
	double Orientation[3];
	double MaxAngle;
} Robot_Parameter_Workspace_Type;

typedef struct Robot_Parameter_Collision_Type
{	double LinkSize[7];
	unsigned short Self;
	unsigned short Inter;
} Robot_Parameter_Collision_Type;

typedef struct UnitsRatio_Type
{	unsigned long MotorUnits;
	unsigned long AxisUnits;
	signed char Direction;
	signed long HomeOffset;
} UnitsRatio_Type;

typedef struct Robot_Parameter_UnitsRatio_Type
{	struct UnitsRatio_Type Joints[6];
	struct UnitsRatio_Type Aux[6];
} Robot_Parameter_UnitsRatio_Type;

typedef struct Coord_Type
{	double X;
	double Y;
	double Z;
} Coord_Type;

typedef struct Link_Type
{	struct Coord_Type Offset;
	struct Coord_Type Rotation;
} Link_Type;

typedef struct UserTrf_Type
{	unsigned char AxesNum;
	unsigned long Direct;
	unsigned long Inverse;
} UserTrf_Type;

typedef struct Mech_Type
{	unsigned char Type;
	struct Link_Type Links[6];
	double Coupling[6];
	struct UserTrf_Type UserTrf;
} Mech_Type;

typedef struct Frame_Type
{	double Axes[6];
} Frame_Type;

typedef struct Calibration_Tool_Type
{	struct Frame_Type Points[5];
	unsigned short Start;
	unsigned short Status;
	struct Coord_Type Result;
} Calibration_Tool_Type;

typedef struct Calibration_Frame_Type
{	struct Coord_Type Points[3];
	unsigned short Start;
	unsigned short Status;
	struct Frame_Type Result;
} Calibration_Frame_Type;

typedef struct Robot_Parameter_Calibration_Type
{	struct Calibration_Tool_Type Tool;
	struct Calibration_Frame_Type Frame;
} Robot_Parameter_Calibration_Type;

typedef struct DrivesInterface_Type
{	signed long Joints[6];
	signed long Aux[6];
} DrivesInterface_Type;

typedef struct Point_Type
{	double Axes[6];
	unsigned char Mode;
	double Aux[6];
	unsigned char ModeAux;
} Point_Type;

typedef struct Robot_Jog_Type
{	unsigned char Mode;
	unsigned char AxisIndex;
	unsigned char Direction;
	double GotoPos;
} Robot_Jog_Type;

typedef struct Robot_Parameter_Conveyor_Type
{	double Angle;
	double Position;
} Robot_Parameter_Conveyor_Type;

typedef struct Robot_Parameter_Type
{	struct Robot_Parameter_JointLimits_Type JointLimits[6];
	struct Robot_Parameter_Path_Type PathLimits;
	struct Robot_Parameter_JointLimits_Type AuxLimits[6];
	struct Robot_Parameter_Workspace_Type Workspace[11];
	struct Robot_Parameter_Collision_Type Collision;
	struct Robot_Parameter_UnitsRatio_Type UnitsRatio;
	struct Mech_Type Mechanics;
	struct Robot_Parameter_Calibration_Type Calibration;
	double Override;
	unsigned char* Program;
	char Blocks[101][101];
	struct DrivesInterface_Type ActFromDrives;
	unsigned long StartLine;
	unsigned long StopLine;
	struct Point_Type Points[201];
	struct Frame_Type Tool[21];
	struct Frame_Type Frame[21];
	struct Robot_Jog_Type Jog;
	struct Robot_Parameter_Conveyor_Type Conveyor[2];
	double PathCorrection[6];
	unsigned short M_synch[101];
	double CycleTime;
	double FilterTime;
	double MaxTransitionAngle;
	unsigned short SingleStep;
	unsigned short Simulation;
	unsigned short SingularityWarning;
	unsigned long License;
} Robot_Parameter_Type;

typedef struct Robot_Monitor_Type
{	unsigned long Handle;
	unsigned char AxesNum;
	unsigned short Moving;
	unsigned short Halted;
	double PathSpeed;
	double PathPosition[6];
	double JointPosition[6];
	double JointSpeed[6];
	double AuxPosition[6];
	struct DrivesInterface_Type SetToDrive;
	double MountBasePosition[6];
	double ToolBasePosition[6];
	struct Frame_Type WireFrame[8];
	unsigned long LineNumber;
	char CurrentBlock[101];
	double BlockLength;
	double CompletedBlockLength;
	unsigned char TargetPoint;
	unsigned short Tool;
	unsigned short Frame;
	unsigned short M[101];
	unsigned short R_[101];
	unsigned short DI_[101];
	unsigned short DO_[101];
	unsigned char TrackActive;
	unsigned char TrackSynch;
	unsigned char TangActive;
	double TangOffset;
	unsigned short ActiveError;
	unsigned short ErrorLine;
	enum Robot_Monitor_State_Type State;
} Robot_Monitor_Type;

typedef struct Robot_Type
{	struct Robot_Command_Type Commands;
	struct Robot_Parameter_Type Parameters;
	struct Robot_Monitor_Type Monitor;
} Robot_Type;



unsigned short RobotControl(unsigned long Robots, unsigned char RobotsNumber);

#endif 

