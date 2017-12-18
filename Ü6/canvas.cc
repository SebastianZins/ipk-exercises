#include <iostream>
#include <algorithm>
#include <cmath>

#include "canvas.hh"
#include "point.hh"
#include "pgm.hh"

//constructor
Canvas::Canvas(const Point& center, double width, double height,
int horPixels, int vertPixels)
	: horPixels (horPixels)
	, vertPixels (vertPixels)
	, height (height)
	, width (width)
    , center(horPixels,std::vector<int>(vertPixels))
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
double Canvas::getGreyValue(int x, int y){
	return greyValues[x][y];}
std::vector<std::vector<int> > Canvas::getValues(){
	return greyValues;}

//other
Point Canvas::coord(int i, int j) const{
	double x = (i - horPixels/2.)*width / horPixels;
    double y = (j - vertPixels/2.)*height / vertPixels;
    return {x + center.x(), y + center.y()};
}
void Canvas::write(const std::string& filename){
	write_pgm(greyValues, filename);
}