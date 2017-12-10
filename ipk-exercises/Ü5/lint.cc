#include <iostream>
#include <string>
#include <sstream>

#include "lint.hh"

bool check_parentheses(std::string symbol){
	int begin=0, end=0;
	for (int i = 0; i < symbol.length(); ++i){
		switch(symbol[i]){
			case '(': 
			begin ++;
			break;
			case ')':
			end++;
			break;
		}
	}
	if(begin == end) return true;
	else return false;
}
