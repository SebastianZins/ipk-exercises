#include <vector>
#include <iostream>
#include <utility>

#include "histogram.hh"

// default-constructible
Histogram::Histogram(){}
// add new number to data set
void Histogram::insert(double x){
	if(values.size()>0){
		if(x < minV){minV = x;}
		else if(x > maxV){maxV = x;}
	}else{
		minV = x;
		maxV = x;
	} values.push_back(x);
}
// return size of data set
unsigned int Histogram::size() const {return values.size();}
// return smallest value in data set
double Histogram::min() const {return minV;}
// return largest value in data set
double Histogram::max() const {return maxV;}
// classify the data into bin_count bins and
// print the histogram for the data set to stdout
void Histogram::print(unsigned int bin_count){
	std::cout<<std::endl
	<<"Histogram of "<<size()<<" entries, min = "
	<<min()<<", max = "<<max()<<std::endl;
	std::pair <double,double> interval;
	double number;
	for(unsigned int i=1;i<bin_count+1;i++){
		number = 0;
		interval.first=(min() + (i-1) * ((max() - min())/bin_count));
		interval.second=(min() + i * ((max() - min())/bin_count));
		for(int j = values.size()-1; j>=0; j--){
			if(interval.first<=values[j] && values[j]<=interval.second){
				number++;
				values.erase(values.begin()+j);
			}
		}
		std::cout.width(7);
		std::cout<<interval.first<<" -- ";
		std::cout.width(7);
		std::cout<<interval.second<<": "<<number<<std::endl;
	}
}
void Histogram::print_normalized(unsigned int bin_count){
	std::cout<<std::endl
	<<"Histogram of "<<size()<<" entries, min = "
	<<min()<<", max = "<<max()<<std::endl;
	std::pair <double,double> interval;
	double number;
	double size = values.size();
	for(unsigned int i=1;i<bin_count+1;i++){
		number = 0;
		interval.first=(min() + (i-1) * ((max() - min())/bin_count));
		interval.second=(min() + i * ((max() - min())/bin_count));
		for(int j = values.size()-1; j>=0; j--){
			if(interval.first<=values[j] && values[j]<=interval.second){
				number++;
				values.erase(values.begin()+j); //->worst-case: N! iterations insted of N^n
			}
		}
		std::cout.width(9);
		std::cout<<interval.first<<" -- ";
		std::cout.width(9);
		std::cout<<interval.second<<": "<<(number/size)*100<<"%"<<std::endl;
	}
}
