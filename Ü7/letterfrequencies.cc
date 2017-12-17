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
	unsigned char c; int i = 0;
	while (true){
		// read in character
		std::cin >> c;
		// abort if input closed
		if (not std::cin) {break;}
		c = std::toupper(c);
		//std::cout << c << std::endl;
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
void print_frequencies(const std::map<char,int>& freq){
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
}