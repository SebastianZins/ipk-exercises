#include <iostream>

#include "canvas.hh"
#include "point.hh"

int main(){

<<<<<<< HEAD
	Point center(2,2);
	Canvas can(center, 4.0, 4.0, 4, 4);
	Point pixel = can.coord(0,0);

	//std::cout << "Pixel: "<<pixel.getX()<<","<<pixel.getY()<<std::endl
	//<<"Canvas: " << can.getCenterX()<<","<<can.getVertPixels()<<std::endl
	//<<"max(2,4) = "<<std::max(2,4)<<std::endl;	
	/*for(int i=0; i<can.getHorPixels(); i++){
		for(int j= 0; j<can.getVertPixels();j++){
			std::cout << can.getGreyValue(i,j)<<" "<<i<<"/"<<j<<std::endl;
		}
	}*/

	//can.write("image");
=======
	Point center(200,150);
	Canvas can(center, 4.0, 3.0, 400, 300);
	//Point pixel = can.coord(0,9);
	



	double x = (i - _horPixels/2.)*_width / _horPixels;
    double y = (j - _vertPixels/2.)*_height / _vertPixels;
    return {x + _center.x(), y + _center.y()};




	can.write("image.pgm");
>>>>>>> 7
	return 0;
}
