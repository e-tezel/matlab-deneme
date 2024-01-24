#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "mtlb_publisher_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block mtlb_publisher/Publish
extern SimulinkPublisher<geometry_msgs::Point, SL_Bus_mtlb_publisher_geometry_msgs_Point> Pub_mtlb_publisher_5;

void slros_node_init(int argc, char** argv);

#endif
