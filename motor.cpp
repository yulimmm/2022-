#include <ros.h>
#include <std_msgs/UInt16.h>

int DIR = 9;
int PWM = 10;

ros::NodeHandle nh;

void cmd_vel_callback(cmd_vel)
{
     ROBOT_WIDTH=0.44
     left_speed_out = cmd_vel.linear.x - cmd_vel.angular.z*ROBOT_WIDTH/2
     right_speed_out = cmd_vel.linear.x + cmd_vel.angular.z*ROBOT_WIDTH/2
     v = cmd_vel.linear.x        # speed m/s
     theta = cmd_vel.angular.z      # angle rad/s
     rospy.loginfo("VEL_CMD: " + str(v) + "," + str(theta))
     servo_publisher(left_speed_out, right_speed_out)
}

void bldc (const std_msgs::UInt16& cmd_msg){
  digitalWrite(DIR, HIGH);
  analogWrite (PWM, cmd_msg.data);
  delay(500);
}

ros::Subscriber<std_msgs::UInt16> sub("bldc", &bldc);


void setup()

{
  pinMode(DIR, OUTPUT);
  pinMode(PWM, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{
 nh.spinOnce();
 delay(1);

      }

