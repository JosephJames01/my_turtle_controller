#include "ros/ros.h"

int main(int argc, char **argv){

ros::init(argc, argv, "my_first_node");
ros::NodeHandle nh;

ROS_INFO("Hello from my first node");
sleep(10);
return 0;

}

