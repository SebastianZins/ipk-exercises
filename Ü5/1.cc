#include <iostream>
#include <cmath>
#include <vector>

const double pi = M_PI;											//Pi


struct Point {													//Struktur eines Punktes
	double cordX;												//X-Koordinate
	double cordY;												//Y-Koordinate
};
struct Polygon{													//Polygon aus mehreren Points
	std::vector<Point> p;
};


void coordinat(std::vector<double>& v, int type, int n);

Polygon constract(
	const std::vector<double>& x,
	const std::vector<double>& y);

double volume(const Polygon& polygon);

//#################################################################################
//####–––––MAIN–––––###############################################################
//#################################################################################

int main(int argc, char const *argv[]){
	std::cout<<"\nPunkte| Flaescheninhalt\n––––––|–––––––––––––––\n";
	for (int n = 0; n <= 10; ++n){								//Wiederholt 11x für 0 bis 10 Punkte
		std::vector<double> x;
		std::vector<double> y;
		coordinat(x, 0, n+1);
		coordinat(y, 1, n+1);
		Polygon poly = constract(x, y);

		double A = volume(poly);

		std::cout.width(6);
		std::cout<<n;
		std::cout<<"|";
		std::cout.width(14);
		std::cout<<std::right<<A<<"\n";
	}std::cout<<"\n";

	return 0;
}
//#################################################################################
//####–––––/MAIN–––––##############################################################
//#################################################################################

void coordinat(std::vector<double>& v, int type, int n){		//Koordinaten in Vektor x und y
	if(type == 0){												//X-Koordinaten
		for (int i = 0; i < n; ++i)	v.push_back(std::cos((i/(double)(n-1)) * 2 * pi));
		return;
	}else {														//Y-Koordinaten
		for (int i = 0; i < n; ++i)	v.push_back(std::sin((i/(double)(n-1)) * 2 * pi));
		return;
	}
}
Polygon constract(	const std::vector<double>& x,				//Polygon polygon aus mehreren Punkten
					const std::vector<double>& y){				//aus x-, y-Koordinaten
	if(x.size() != y.size()) std::cout <<"ERROR: x und y ungeleiche Länge" << std::endl;
	Polygon polygon;
	for(int i = 0; i<x.size(); i++){
		Point point;
		point.cordX = x[i];										//point deklarieren
		point.cordY = y[i];
		polygon.p.push_back(point);								//point in polygon
	}
	return polygon;
}
double volume(const Polygon& polygon){							//2D Volumenberechnung
	if(polygon.p.size() == 1 || polygon.p.size() == 2 || polygon.p.size() == 3) return 0;//A=0, wenn weniger als 2 Ecken 
	else {
		double vol = 0;
		for (int i = 0; i < polygon.p.size()-1; ++i){
			double x1 = polygon.p[i+1].cordX;
			double y1 = polygon.p[i+1].cordY;
			double x = polygon.p[i].cordX;
			double y = polygon.p[i].cordY;
			vol += (x*y1 - x1*y);
		}vol /= 2;
		if(vol >= 0)return vol;									//return + wenn >=0
		else return vol * -1;									//return - wenn <0
	}
}