#ifndef ITERATION_RESULT_HH
#define ITERATION_RESULT_HH

#include "point.hh"
#include "canvas.hh"

class IterationResult : public Point{
	/*import Point:
	-double: x(), y()
	-void: setX(double), setY(double), setValues(double,double/Point)*/
private:
	Point pnt;
	int itNumber;
public:
	//constructor
	IterationResult();
	IterationResult(Point pnt, int itNumber);

	//getter
	int getItNumber() const;
	//setter
	void setItNumber(const int itNumber);

	//creates IterationResult with each Point in the iterations
	IterationResult iterate(Point z, Point c, double threshold, int maxIt);
	//prints mandelbrot on a canvas
	void mandelbrot (Canvas& canvas, double threshold, int maxIt, std::string filename);
};
#endif//ITERATION_RESULT_HH