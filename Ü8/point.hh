#ifndef POINT_HH
#define POINT_HH

// Interface und Implementierung sind hier der Einfachheit
// halber in einer Datei

class Point
{

private:

  double _x;
  double _y;
public:

  // default constructor
  Point()
    : _x(0)
    , _y(0)
  {}

  // constructor für übergebene Koordinaten
  Point(double x, double y)
    : _x(x)
    , _y(y)
  {}

  //constructor für übergebenen Point
  Point(const Point& pnt)
    : _x(pnt.x())
    , _y(pnt.y())
  {}

  // Accessors

  double x() const
  {
    return _x;
  }

  double y() const
  {
    return _y;
  }

  void setY(double _y){this->_y=_y;}
  void setX(double _x){this->_x=_x;}
  void setValues(double _x,double _y){
    this->_x=_x;
    this->_y=_y;}
  void setValues(Point _pnt){
    _x=_pnt.x();
    _y=_pnt.y();}


};

#endif // POINT_HH
