#ifndef MTLB_PUBLISHER__VISIBILITY_CONTROL_H_
#define MTLB_PUBLISHER__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define MTLB_PUBLISHER_EXPORT __attribute__ ((dllexport))
    #define MTLB_PUBLISHER_IMPORT __attribute__ ((dllimport))
  #else
    #define MTLB_PUBLISHER_EXPORT __declspec(dllexport)
    #define MTLB_PUBLISHER_IMPORT __declspec(dllimport)
  #endif
  #ifdef MTLB_PUBLISHER_BUILDING_LIBRARY
    #define MTLB_PUBLISHER_PUBLIC MTLB_PUBLISHER_EXPORT
  #else
    #define MTLB_PUBLISHER_PUBLIC MTLB_PUBLISHER_IMPORT
  #endif
  #define MTLB_PUBLISHER_PUBLIC_TYPE MTLB_PUBLISHER_PUBLIC
  #define MTLB_PUBLISHER_LOCAL
#else
  #define MTLB_PUBLISHER_EXPORT __attribute__ ((visibility("default")))
  #define MTLB_PUBLISHER_IMPORT
  #if __GNUC__ >= 4
    #define MTLB_PUBLISHER_PUBLIC __attribute__ ((visibility("default")))
    #define MTLB_PUBLISHER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define MTLB_PUBLISHER_PUBLIC
    #define MTLB_PUBLISHER_LOCAL
  #endif
  #define MTLB_PUBLISHER_PUBLIC_TYPE
#endif
#endif  // MTLB_PUBLISHER__VISIBILITY_CONTROL_H_
// Generated 24-Jan-2024 14:10:47
// Copyright 2019-2020 The MathWorks, Inc.
