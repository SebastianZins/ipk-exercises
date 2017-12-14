#include <iostream>
#include <map>

std::map<char,int> get_frequencies();
void print_frequencies(const std::map<char,int>& freq);

int main()
{
	std::map<char,int>freq = get_frequencies();
	print_frequencies(freq);
	return 0;
}

std::map<char,int> get_frequencies(){
	std::map<char,int> charecter;
	while (true){
		unsigned char c;
		// read in character
		std::cin >> c;
		// abort if input closed
		if (not std::cin) {break;}
		// work with c
		if(charecter.count(c)>0){
			charecter[c] ++;}
		else{

			charecter [c] = 1;
		}
	}
	return charecter;
}
void print_frequencies(const std::map<char,int>& freq){
	double totalCharacter = freq.size();
	for(auto entry : freq){
		std::cout<<"Frequencie of "<<entry.first<<" is "
		<<(double)(entry.second / totalCharacter)<<"%"<<std::endl;}
}