#ifndef POINT_HH
#define POINT_HH

class Point{
private:
	double x, y;

public:
	//constructor
	Point();
	Point(double newX, double newY);
	//destructor
	~Point();

	//functions
	//getter
	double getX() const;
	double getY() const;
	//setter
	void setX(double newX);
	void setY(double newY);
	void setValues(double newX, double newY);
	
};

#endif//POINT_HH