#!/usr/bin/env python

import rospy
import roslib
import tf

from geometry_msgs.msg import PoseArray

#Define a class
class Whycon_detect():

	def __init__(self):
		self.dir={}
		print("2")
		rospy.init_node('whycon_detection',anonymous = True)
		print("3")
		rospy.Subscriber('/whycon/poses',PoseArray, self.callback,self)
		print("4")
		rospy.loginfo("starting callback")
#		rospy.spin()

	def callback(self, data):
		rospy.loginfo("started callback")
		#print("5.0")
		rospy.loginfo("after print")

		for i in range(len(data.poses)):
			print("5.1  = ",i)
			self.dir[i]=[data.poses[i].position.x,data.poses[i].position.y,data.poses[i].position.z]
			print("5.2  = ",i)
		rospy.loginfo("self dir")
		print(self.dir)




if __name__=="__main__":
	print("first one")
	marker = Whycon_detect()
	while not rospy.is_shutdown():
		rospy.spin()
