
#include "lemlib/pose.hpp"
class Particle {
public:
    lemlib::Pose pose;
    double theta;
    double weight; 

    Particle(double x, double y, double theta, double weight);

    Particle() : pose(0, 0, 0), theta(0.0), weight(1.0) {
    }

    void move (double dx, double dy, double dtheta) {
        pose.x += dx;
        pose.y += dy;
        pose.theta += dtheta; //can use a global thetha
    }



    // void updateWeight () {

    // }
};

