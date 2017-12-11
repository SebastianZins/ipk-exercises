#include <iostream>
#include <map>

std::map<char,int> get_frequencies();

int main()
{
	std::map<char,int>temp = get_frequencies();
	for(auto i:temp){std::cout<< i.first<<i.second<<std::endl;}
	return 0;
}

std::map<char,int> get_frequencies(){
	std::map<char,int> map;
	int i  = 0;
	while (true){
		unsigned char c;
		// read in character
		std::cin >> c;
		// abort if input closed
		if (not std::cin) {break;}
		// work with c
		map [c] = i;
		i++;
	}
	return map;
}
