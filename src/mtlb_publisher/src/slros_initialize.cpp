#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "mtlb_publisher";

// For Block mtlb_publisher/Publish
SimulinkPublisher<geometry_msgs::Point, SL_Bus_mtlb_publisher_geometry_msgs_Point> Pub_mtlb_publisher_5;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

