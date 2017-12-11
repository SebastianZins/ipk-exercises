#include "canvas.hh"
#include "point.hh"

Canvas::Canvas(const Point& center, double width, double height,
int horPixels, int vertPixels)
	: horPixels (horPixels)
	, vertPixels (vertPixels)
	, height (height)
	, width (width)
	, middle(center.getX(), center.getY())
	{}
//destructor
Canvas::~Canvas(){

}