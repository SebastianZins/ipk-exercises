#include <iostream>

#include "canvas.hh"
#include "point.hh"
#include "iteration_result.hh"

int main(){
	IterationResult it = IterationResult();
	Point z = Point();
	Point c = Point(5,2);
	IterationResult temp = it.iterate(z,c,10,10);
	std::cout<<temp.x()<<std::endl;
return 0;
}
