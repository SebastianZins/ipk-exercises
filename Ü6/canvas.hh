#ifndef CANVAS_HH
#define CANVAS_HH

#include <vector>

#include "point.hh"
#include "pgm.hh"


class Canvas{
private:
	const int horPixels, vertPixels;
	const double height, width;
	const Point center;
	std::vector<std::vector<int> > greyValues;

public:
	//constructor
	Canvas(const Point& center, double width, double height,
	int horPixels, int vertPixels);
	//destructor
	~Canvas();

	//functions
	//getter
	double getCenterX();
	double getCenterY();
	double getWidth();
	double getHeight();
	double getHorPixels();
	double getVertPixels();
	double getGreyValue(int x, int y);

	//other
	Point coord(int i, int j) const;

	void write(const std::string& filename);
};

#endif //CANVAS_HH
