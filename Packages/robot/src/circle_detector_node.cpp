#include "circle_detector.h"
#include <ros/ros.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    ros::init(argc, argv, "CircleDetector");
    CircleDetector circle_detector;

    ros::Rate r(10.0);
    while (ros::ok())
    {

        Circle c = circle_detector.get_circle();
        if(c.x != -10 && c.y != -10){
            cout << "Detecting Cricle!" << endl;
            cout << c.x << " " << c.y << endl;
        }

        ros::spinOnce();
        r.sleep();
    }
    return 0;
}