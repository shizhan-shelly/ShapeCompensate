// Copyright 2016 Fangling Software Co., Ltd. All Rights Reserved.
// Author: shizhan-shelly@hotmail.com (Zhan Shi)

#ifndef GCODE_GCODEDEFINITION_H__
#define GCODE_GCODEDEFINITION_H__

typedef enum _FootMetricSystem {
  FootSystem,
  MetricSystem,

} FootMetricSystem;

typedef enum _RelorAbsCoordinate {
  Relative,
  Absolute,

} RelorAbsCoordinate;

typedef enum _GMID {
  G00,
  G01,
  G02,
  G03,
  G04,
  G40,
  G41,
  G42,
  G20,
  G21,
  G26,
  G27,
  G28,
  G90,
  G91,
  G92,
  G99,
  M00,
  M02,
  M07,
  M08,
  M09,
  M10,
  M11,
  M12,
  M28,
  M29,
  GGG,

} GMID;

typedef struct _GCodeStruct {
  size_t ShowLine;
  size_t LineNoInTotalFile;
  unsigned short Name;
  unsigned short PierceHoleNum;
  unsigned short CycleCount;
  bool OmitKerf;
  bool OmitF;
  double X0;
  double Y0;
  double X;
  double Y;
  double I;
  double J;
  double F;
  double R;
  double StartAngle;
  double EndAngle;
  double Delay;
  double KerfValue;
  double Length;
  double AngleRatio; // 末点切向和下一句曲线切向的夹角的变化率 
  double ScaleFactor;
  double RotateAngle;
  double HorizonMirror;
  double VerticalMirror;
} GCodeStruct;

typedef struct {
	double g_f_XMaxLimit;  //+X轴最大值
	double g_f_XMinLimit;  //-X轴最小值
	double g_f_YMaxLimit; //+Y轴最大值
	double g_f_YMinLimit;//-Y轴最小值
	double ScaleXY;
	double g_GraphicX_start;
	double g_GraphicY_start;
	double MaxRadius;
	double MinRadius;
} GraphyLimit;

typedef struct {
  double x;
  double y;
  double r;
} Circle_t;

typedef struct {
  double x;
  double y;
} Point_t;

typedef struct {
  double X0;
  double Y0;
  double X;
  double Y;
} Line_t;

#endif // GCODE_GCODEDEFINITION_H__
