#include <path_follower/path_generator.h>

int main(int _argc, char **_argv) {
    ros::init(_argc, _argv, "path_generator_node");

    PathGenerator generator;

    ros::Rate rate(5);
    while (ros::ok()) {
        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}