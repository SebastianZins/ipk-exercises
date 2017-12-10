#include <iostream>
#include "io.hh"

int main(int argc, char const *argv[])
{
	int N, min, max;
	int seed = random_seed();
	std::cout << "Anzahl an Elementen: ";
	std::cin>>N;
	std::cout << "Max-Wert: ";
	std::cin >> max;
	std::cout <<"Min-Wert: ";
	std::cin >> min;
	std::cout <<std::endl;
	std::vector <double> v = uniform_distribution(seed, N, min, max);
	for(double i : v){
		std::cout << i << " "<< std::endl;
	}
	return 0;}