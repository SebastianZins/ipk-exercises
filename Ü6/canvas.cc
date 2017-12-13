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
	, center(center.getX(), center.getY())
	, greyValues(horPixels, {vertPixels})
	{
		for(int x = 0; x < horPixels; x++){
			for(int y = 0; y < vertPixels; y++){
				greyValues[x][y] = std::max(0 , (int)(100 * sin(pow((double)x,-1.0)) * sin(pow((double)y,-1.0)) + 1));
			}
		}
	}
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

//other
Point Canvas::coord(int i, int j) const{
	int difPosX = (width/2 - center.getX()) * -1;
	int difPosY = (height/2 - center.getY()) * -1;

	double difX = width/horPixels;
	double difY = height/vertPixels;

	Point pixel((i + difPosX) *difX , (j + difPosY) *difY);

	return pixel;
}
void Canvas::write(const std::string& filename){
	write_pgm(greyValues, filename);
}
