#include <iostream>
#include "io.hh"

int main(int argc, char const *argv[])
{
	int seed = random_seed();
	int N;
	double avg, std_dev;
	std::cout <<"Anzahl an Elementen: ";
	std::cin >>N;
	std::cout << "Durchschnittswert: ";
	std::cin>>avg;
	std::cout<<"Abweichung: ";
	std::cin>>std_dev;
	std::vector <double> v = normal_distribution(seed, N, avg, std_dev);
	for(double i : v){
		std::cout << i << " "<< std::endl;
	}
	return 0;
}