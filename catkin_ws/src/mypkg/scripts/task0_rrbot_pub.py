#!/usr/bin/env python

import rospy 
from std_msgs.msg import Float64 

def rrbot_talker():
	pub1 = rospy.Publisher('/rrbot/joint1_position_controller/command', Float64, queue_size = 10)
	pub2 = rospy.Publisher('/rrbot/joint2_position_controller/command', Float64, queue_size = 10)
	rospy.init_node('rrbot_talker', anonymous = True)
	rate = rospy.Rate(5)
	while not rospy.is_shutdown():
		angle_value = 1.57 #90 in radians you can choose different angle values for the same 
		pub1.publish(angle_value)
		pub2.publish(0)
		rate.sleep

if __name__ == '__main__':
	try:
		rrbot_talker()
	except rospy.ROSInterruptException:
		pass
