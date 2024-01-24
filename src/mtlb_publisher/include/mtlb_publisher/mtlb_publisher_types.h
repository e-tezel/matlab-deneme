/*
 * mtlb_publisher_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "mtlb_publisher".
 *
 * Model version              : 1.3
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C++ source code generated on : Wed Jan 24 14:10:39 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_mtlb_publisher_types_h_
#define RTW_HEADER_mtlb_publisher_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_mtlb_publisher_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_mtlb_publisher_geometry_msgs_Point_

struct SL_Bus_mtlb_publisher_geometry_msgs_Point
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_P_T */

/* Parameters (default storage) */
typedef struct P_mtlb_publisher_T_ P_mtlb_publisher_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_mtlb_publisher_T RT_MODEL_mtlb_publisher_T;

#endif                                 /* RTW_HEADER_mtlb_publisher_types_h_ */
