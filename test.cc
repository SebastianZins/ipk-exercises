#include <iostream>
#include <vector>
#include <string>

int main(){

	std::string str = "hallo world";
	std::vector<char> vec (str.begin(), str.end());
	for(int i=0; i<vec.size(); i++){
		std::cout<<vec[i];
	}
	std::cout<<std::endl;
	return 0;
}
