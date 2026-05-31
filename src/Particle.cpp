
class Particle {
public:
    double x;
    double y;
    double theta;
    double weight; 

    Particle(double x, double y, double theta, double weight);

    Particle() {
        x = 0;
        y = 0;
        theta = 0;
        weight = 1.0;
    }

    void move (double dx, double dy, double dtheta) {
        x += dx;
        y += dy;
        theta += dtheta; //can use a global thetha
    }



    // void updateWeight () {

    // }
};

