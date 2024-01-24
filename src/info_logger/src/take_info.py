#!/usr/bin/env python3
# license removed for brevity
import rospy
from geometry_msgs.msg import Point

def callback(data):
    rospy.loginfo(data)

def listener():
    rospy.init_node('listener', anonymous=True)

    rospy.Subscriber("newPos", Point, callback)

    rospy.spin()

if __name__ == '__main__':
    listener()