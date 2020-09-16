
#!/usr/bin/env python

import rospy 
from std_msgs.msg import String 

def rrbot_talker():
        pub1 = rospy.Publisher('chatter', String, queue_size=10)
        rospy.init_node('rrbot_talker', anonymous = True)
        rate = rospy.Rate(5)
        while not rospy.is_shutdown():
                message = "Hey there! %s "% rospy.get_time()
          
                pub1.publish(message)
                rate.sleep

if __name__ == '__main__':
        try:
                rrbot_talker()
	except rospy.ROSInterruptException:
		pass

