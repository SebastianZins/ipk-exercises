#include <iostream>
#include <map>
#include <cctype>

#include "histogram.hh"

std::map<char,int> get_frequencies();
double print_frequencies(const std::map<char,int>& freq);

//############################################
int main(){

	int bins = 5; //number of bins

	std::map<char,int> freq = get_frequencies();
	print_frequencies(freq);

	Histogram his = Histogram();

	for(auto entry : freq){
		his.insert(entry.second);
	}

	his.print_normalized(bins);

	return 0;
}
//############################################

std::map<char,int> get_frequencies(){
	std::map<char,int> character;
	unsigned char c; int i = 0;
	while (true){
		std::cin >> c;
		if (not std::cin) {break;}
		c = std::toupper(c);
		if(std::isalpha(c)){
			if(character[c]==0){
				character[c] =1;
			}else{
				character [c] ++;
			}
		}
		i++;
	}
	return character;
}
double print_frequencies(const std::map<char,int>& freq){
	double frequency;
	int size = 0;
	for(auto& entry : freq){size += entry.second;}
	std::cout<<std::endl<<"Frequency of a total of "<<size<<" character"<<std::endl;
	for(auto& entry : freq){
		frequency = ((double)entry.second / (double)size)*100;
		std::cout<<"| "<<entry.first<<" | ";
		std::cout.width(10);
		std::cout<<frequency<<" % | ";
		std::cout.width(8);
		std::cout<<entry.second<<" |"<<std::endl;}
	return frequency;
}
