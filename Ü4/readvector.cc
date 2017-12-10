#include <iostream>
#include "io.hh"
#include "statistics.hh"

int main(int argc, char const *argv[])
{	
	//std::vector <double> v = read_vector();
	std::vector<double> v = {{1,8,5,2}};
	double mittel = mean(v);								//1b
	std::cout <<"Mittelwert: "<< mittel << " "<<std::endl<<std::endl;


	double medianV = median(v);								//1a²
	std::cout << "Median: "<<medianV <<"\n"<<std::endl;

	int k = 5;
	double momentV = moment(v, k);							//1b²
	std::cout<< k<<"-tes Moment: "<<momentV << "\n\n";

	double deviation = standard_deviation(v);
	std::cout << "Standart Abweichung: "<<deviation <<"\n\n";
}