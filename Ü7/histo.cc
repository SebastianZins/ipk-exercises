#include <vector>
#include <iostream>

#include "histogram.hh"
#include "io.cc"

int main(){
	Histogram his = Histogram();

	unsigned int entries;
	double min, max;

	std::cout<<"Enter the number of random entries... ";
	std::cin >> entries;

	std::cout<<"Enter minimum value... ";
	std::cin>>min;

	std::cout<<"Enter maximum value... ";
	std::cin>>max;

	std::vector<double> random_numbers = uniform_distribution(random_seed(), entries, min, max);

	for(unsigned int i=0; i<random_numbers.size(); i++){
		his.insert(random_numbers[i]);
	}

	his.print_normalized(5);

}