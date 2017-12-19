#include <iostream>

#include "canvas.hh"
#include "point.hh"
#include "iteration_result.hh"

int main(){
	Point center = Point();
	Canvas can = Canvas(center,2.0,2.0,200,200);

	IterationResult it = IterationResult();

	it.mandelbrot(can, 20, 20, "image.pgm");


return 0;
}
