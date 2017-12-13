#include <iostream>

#include "point.hh"
#include "canvas.hh"

int main(){
	Point pnt(1,1);
	Canvas can(pnt, 2.0, 2.0, 4, 8);
	Point pixel = can.coord(0,8);
	//std::cout <<pixel.getX()<<" "<<pixel.getY()<<std::endl;


	return 0;
}