#include <iostream>
#include <map>
#include <cctype>

std::map<char,int> get_frequencies();
void print_frequencies(const std::map<char,int>& freq);

int main(){
	print_frequencies(get_frequencies());
	return 0;
}

std::map<char,int> get_frequencies(){
	std::map<char,int> character;
	while (true){
		unsigned char c;
		// read in character
		std::cin >> c;
		// abort if input closed
		if (not std::cin) {break;}
		if(std::isalpha(c)){
		if(character.count(c)>0){
				character[std::toupper(c)] ++;}
			else{

				character [std::toupper(c)] = 1;
			}
		}
	}
	return character;
}
void print_frequencies(const std::map<char,int>& freq){
	double frequency;
	int size = 0;
	for(auto& entry : freq){size += entry.second;}
	std::cout<<std::endl<<"Frequency of a total of "<<size<<" character"<<std::endl;
	for(auto& entry : freq){
		frequency = ((double)entry.second / (double)size)*100;
		std::cout<<"| "<<entry.first<<" | ";
		std::cout.width(6);
		std::cout<<frequency<<" % |"<<std::endl;}
}