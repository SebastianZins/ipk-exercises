#include <iostream>

#include "canvas.hh"
#include "point.hh"

int main(){

	Point center(0,0);
	Canvas can(center, 4.0, 5.0, 4000, 5000);
	Point pixel = can.coord(0,14);

	std::cout << "Pixel: "<<pixel.getX()<<","<<pixel.getY()<<std::endl
	<<"Canvas: " << can.getCenterX()<<","<<can.getVertPixels()<<std::endl
	<<"max(2,4) = "<<std::max(2,4)<<std::endl;	
	for(int i=0; i<can.getHorPixels(); i++){
		for(int j= 0; j<can.getVertPixels();j++){
			std::cout << can.getGreyValue(i,j)<<" "<<i<<"/"<<j<<std::endl;
		}
	}

	can.write("image");
	return 0;
}