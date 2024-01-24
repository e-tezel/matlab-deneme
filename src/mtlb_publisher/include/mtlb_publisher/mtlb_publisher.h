/*
 * mtlb_publisher.h
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

#ifndef RTW_HEADER_mtlb_publisher_h_
#define RTW_HEADER_mtlb_publisher_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "mtlb_publisher_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
struct DW_mtlb_publisher_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S2>/SinkBlock' */
  boolean_T objisempty;                /* '<S2>/SinkBlock' */
};

/* Parameters (default storage) */
struct P_mtlb_publisher_T_ {
  SL_Bus_mtlb_publisher_geometry_msgs_Point Constant_Value;/* Computed Parameter: Constant_Value
                                                            * Referenced by: '<S1>/Constant'
                                                            */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 2
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2
                                        * Referenced by: '<Root>/Gain2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_mtlb_publisher_T {
  const char_T *errorStatus;
};

/* Class declaration for model mtlb_publisher */
class mtlb_publisher
{
  /* public data and function members */
 public:
  /* Real-Time Model get method */
  RT_MODEL_mtlb_publisher_T * getRTM();

  /* model start function */
  void start();

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  mtlb_publisher();

  /* Destructor */
  ~mtlb_publisher();

  /* private data and function members */
 private:
  /* Block states */
  DW_mtlb_publisher_T mtlb_publisher_DW;

  /* Tunable parameters */
  static P_mtlb_publisher_T mtlb_publisher_P;

  /* Real-Time Model */
  RT_MODEL_mtlb_publisher_T mtlb_publisher_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'mtlb_publisher'
 * '<S1>'   : 'mtlb_publisher/Blank Message'
 * '<S2>'   : 'mtlb_publisher/Publish'
 */
#endif                                 /* RTW_HEADER_mtlb_publisher_h_ */
