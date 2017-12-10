#include <iostream>

#include "lint.hh"
#include "input.hh"

int main(){
	
	std::cout << "Geben Sie einen Term ein"<<std::endl;
	std::string str = read_stream(std::cin);

	if(check_parentheses(str)) std::cout << "Der Term ist korrekt aufgestellt."<<std::endl;
	else std::cout << "Die Klammeranzahl ist fehlerhaft."<<std::endl;


	return 0;
}