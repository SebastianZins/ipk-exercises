#include <iostream>

#include "canvas.hh"
#include "point.hh"

//constructor
Canvas::Canvas(const Point& center, double width, double height,
int horPixels, int vertPixels)
	: horPixels (horPixels)
	, vertPixels (vertPixels)
	, height (height)
	, width (width)
	, center(center.getX(), center.getY())
	{}
//destructor
Canvas::~Canvas(){}

//funcitons
//getter
double Canvas::getCenterX() {return center.getX();}
double Canvas::getCenterY(){return center.getY();}
double Canvas::getWidth() {return width;}
double Canvas::getHeight() {return height;}
double Canvas::getHorPixels() {return horPixels;}
double Canvas::getVertPixels() {return vertPixels;}

//other
Point Canvas::coord(int i, int j) const{
	int difPosX = (width/2 - center.getX()) * -1;
	int difPosY = (height/2 - center.getY()) * -1;

	double difX = width/horPixels;
	double difY = height/vertPixels;

	Point pixel((i + difPosX) *difX , (j + difPosY) *difY);

	std::cout<<difX<<" "<<difPosX<<" "<<i<<" "<<center.getX()<<" "<<width<<std::endl;
	return pixel;
}
void Canvas::write(const std::string& filename){

}