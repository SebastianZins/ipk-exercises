#include "point.hh"

//constructor
Point::Point(){
	x = 0;
	y = 0;
}
Point::Point(double newX, double newY){
	x = newX;
	y = newY;
}
//destructor
Point::~Point(){
}

//functions
//getter
double Point::getX() const {return x;}
double Point::getY() const {return y;}
//setter
void Point::setX(double newX) {x = newX;}
void Point::setY(double newY) {y = newY;}
void Point::setValues(double newX, double newY){
	x = newX;
	y = newY;
}