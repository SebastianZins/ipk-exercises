#include <cmath>
#include <iostream>

#include "iteration_result.hh"
#include "point.hh"
#include "canvas.hh"

IterationResult::IterationResult()
	: pnt(0,0)
	, itNumber(0){}
IterationResult::IterationResult(Point pnt, int itNumber)
	: pnt(pnt.x(), pnt.y())
	, itNumber(itNumber) {}

int IterationResult::getItNumber() const {return itNumber;}
void IterationResult::setItNumber(const int itNumber) {this->itNumber=itNumber;}

IterationResult IterationResult::iterate(Point z, Point c, double threshold, int maxIt) {
	IterationResult it = IterationResult();
	double distance = 0;
	while((maxIt > 0) && (distance < threshold)){

		it.setValues(c);

		c.setX((int) ( z.x()*z.x() + z.y()*z.y() +c.x()) );
		c.setY((int) ( 2*z.x()*z.y() +c.y()) );

		std::cout <<"("<<it.x()<<"/"<<it.y()<<"),("<<c.x()<<"/"<<c.y()<<"),("<<z.x()<<"/"<<z.y()<<")"<<std::endl;

		z.setValues(it);
		it.setValues(c);

		it.setItNumber(getItNumber() + 1);
		distance = sqrt(pow(it.x(), 2) + pow(it.y(), 2));
		maxIt--;
	} 
	return it;
}
void mandelbrot (Canvas& canvas, double threshold, int maxIt, std::string filename{
	
}

