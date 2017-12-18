#include <iostream>

#include "canvas.hh"
#include "point.hh"

int main(){

	Point center(200,150);
	Canvas can(center, 4.0, 3.0, 400, 300);
	//Point pixel = can.coord(0,9);
	



	double x = (i - _horPixels/2.)*_width / _horPixels;
    double y = (j - _vertPixels/2.)*_height / _vertPixels;
    return {x + _center.x(), y + _center.y()};




	can.write("image.pgm");
	return 0;
}