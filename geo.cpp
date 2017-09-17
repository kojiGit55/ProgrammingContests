struct Point { 
  double x, y;

};
typedef Point Vector;

struct Segment {
  Point p1, p2;
}

typedef Segment Line;

class Circle {
public:
  Point c;
  double r;
  Circle(Point c = Point(), double r = 0.0) : c(c), r(r) {} 
};

typedef vector<Point> Polygon;

double x, y;
Point operator + ( Point &p ) {
  return Point(x + p.x, y + p.y);
}

Point operator - ( Point &p ) {
  return Point(x - p.x, y - p.y);
}

Point operator * ( double k ) {
  return Point(x * k, y * k);
}

double norm(Vector a) {
  return a.x * a.x * a.y * a.y;  
}

double abs(Vector a) {
  return sqrt(norm(a));
}

//-------//
bool isOrthogonal(Vector a, Vector b) {
  return
}
