#include <iostream>

#include "point.hh"
#include "canvas.hh"

int main(){
	Point pnt(1,1);
	Canvas can(pnt, 2.0, 2.0, 4, 8);
	//Point pixel = can.coord(0,8);
	//std::cout <<pixel.getX()<<" "<<pixel.getY()<<std::endl;
	std::vector<std::vector<int> > temp = can.getValues();
	for(int x = 0; x < can.getHorPixels(); x++){
		for(int y = 0; y < can.getVertPixels(); y++){
			std::cout <<temp[x][y]<<std::endl;
		}
	}

	return 0;
}