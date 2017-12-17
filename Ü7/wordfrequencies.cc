#include <iostream>
#include <unordered_map>
#include <cctype>
#include <string>

#include "sanitizeword.hh"

std::unordered_map<std::string,int> get_frequencies_string();
void print_frequencies_string(const std::unordered_map<std::string,int>& freq);

//############################################
int main(){
	print_frequencies_string(get_frequencies_string());
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
	double frequency;
	unsigned int size = 0, maxSize = 0;
	for(auto& entry : freq){
		size += entry.second;
		if(maxSize < entry.first.size()){maxSize = entry.first.size();}
	}
	std::cout<<std::endl<<"Frequency of a total of "<<size<<" words"<<std::endl;
	for(auto& entry : freq){
		frequency = ((double)entry.second / (double)size)*100;
		std::cout<<"| ";
		std::cout.width(maxSize);
		std::cout<<entry.first<<" | ";
		std::cout.width(10);
		std::cout<<frequency<<" % | ";
		std::cout.width(8);
		std::cout<<entry.second<<" |"<<std::endl;}
}
