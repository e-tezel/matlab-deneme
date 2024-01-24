/*
 * mtlb_publisher.cpp
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

#include "mtlb_publisher.h"
#include "rtwtypes.h"
#include "mtlb_publisher_types.h"

/* Model step function */
void mtlb_publisher::step()
{
  SL_Bus_mtlb_publisher_geometry_msgs_Point rtb_BusAssignment;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Gain: '<Root>/Gain'
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain2'
   */
  rtb_BusAssignment.X = mtlb_publisher_P.Gain_Gain *
    mtlb_publisher_P.Constant_Value_d;
  rtb_BusAssignment.Y = mtlb_publisher_P.Gain1_Gain *
    mtlb_publisher_P.Constant1_Value;
  rtb_BusAssignment.Z = mtlb_publisher_P.Gain2_Gain *
    mtlb_publisher_P.Constant2_Value;

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S2>/SinkBlock' */
  Pub_mtlb_publisher_5.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void mtlb_publisher::initialize()
{
  {
    char_T b_zeroDelimTopic[8];
    static const char_T tmp[7] = { '/', 'n', 'e', 'w', 'P', 'o', 's' };

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S2>/SinkBlock' */
    mtlb_publisher_DW.obj.matlabCodegenIsDeleted = false;
    mtlb_publisher_DW.objisempty = true;
    mtlb_publisher_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Pub_mtlb_publisher_5.createPublisher(&b_zeroDelimTopic[0], 1);
    mtlb_publisher_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }
}

/* Model terminate function */
void mtlb_publisher::terminate()
{
  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S2>/SinkBlock' */
  if (!mtlb_publisher_DW.obj.matlabCodegenIsDeleted) {
    mtlb_publisher_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S2>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}

/* Constructor */
mtlb_publisher::mtlb_publisher() :
  mtlb_publisher_DW(),
  mtlb_publisher_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
mtlb_publisher::~mtlb_publisher()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_mtlb_publisher_T * mtlb_publisher::getRTM()
{
  return (&mtlb_publisher_M);
}
