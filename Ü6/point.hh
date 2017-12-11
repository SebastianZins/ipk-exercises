#ifndef POINT_HH
#define POINT_HH

class Point{
private:
	double x, y;

public:
	//constructor
	Point();
	Point(double x, double y);
	//destructor
	~Point();

	//functions
	//getter
	double getX() const;
	double getY() const;
	//setter
	void setX(double newX);
	void setY(double newY);
	void setValues(double x, double y);
	
};

#endif//POINT_HH