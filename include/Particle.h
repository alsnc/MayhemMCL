class Particle {
    public:

    double x; 
    double y; 
    double theta;
    double weight;
    void move (double dx, double dy, double dtheta);

    Particle(); 
    Particle(double x, double y, double theta, double weight);
};