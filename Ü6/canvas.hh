#ifndef CANVAS_HH
#define CANVAS_HH

#include <vector>

#include "point.hh"

class Canvas{
private:
	const int horPixels, vertPixels;
	const double height, width;
	const Point center();
	std::vector<std::vector<int> > greyValues;
public:
	//constructor
	Canvas(const Point& center, double width, double height,
	int horPixels, int vertPixels);
	//destructor
	~Canvas();
	
};

#endif //CANVAS_HH