class coordinates {
  double x_;
  double y_;

 public:
};

class Boids {
  coordinates position{};
  coordinates velocity{};

 public:
  double distance(Boids const& b1, Boids const& b2);
};
//bvdius