#include <iostream>
#include <unordered_map>
#include <cctype>
#include <string>

#include "sanitizeword.hh"
#include "histogram.hh"

std::unordered_map<std::string,int> get_frequencies_string();
void print_frequencies_string(const std::unordered_map<std::string,int>& freq);

//############################################
int main(){

	int bins = 5; //number of bins

	std::unordered_map<std::string,int> freq = get_frequencies_string();
	print_frequencies_string(freq);

	Histogram his = Histogram();

	for(auto entry : freq){
		his.insert(entry.second);
	}

	his.print_normalized(bins);

	return 0;
}
//############################################

std::unordered_map<std::string,int> get_frequencies_string(){
	std::unordered_map<std::string, int> word;
	std::string c; int i = 0;
	while (true){
		std::cin >> c;
		if (not std::cin) {break;}
		c = sanitize_word(c);
		if(word[c]==0){
			word[c]=1;
		}else{
			word [c] ++;
		}
		i++;
	}
	return word;	
}
void print_frequencies_string(const std::unordered_map<std::string,int>& freq){
	unsigned int size = 0, maxSize = 0;
	double frequencies;
	for(auto& entry : freq){
		size += entry.second;
		if(maxSize < entry.first.size()){maxSize = entry.first.size();}
	}
	std::cout<<std::endl<<"Frequency of a total of "<<size<<" words"<<std::endl;
	int i = 0;
	for(auto& entry : freq){
		frequencies =  ((double)entry.second / (double)size)*100;
		std::cout<<"| ";
		std::cout.width(maxSize);
		std::cout<<entry.first<<" | ";
		std::cout.width(10);
		std::cout<<frequencies<<" % | ";
		std::cout.width(8);
		std::cout<<entry.second<<" |"<<std::endl;
		i++;}
}
