#include "canvas.hh"
#include "point.hh"

//constructor

Canvas::Canvas(const Point& center, double width, double height,
	int horPixels, int vertPixels){
		this->center().setValues(center.getX(), center.getY());
		this->horPixels = horPixels;
		this->vertPixels = vertPixels;
		this->width = width;
		this->height = height;
	}
//destructor
Canvas::~Canvas(){

}