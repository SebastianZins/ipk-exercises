#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int parse_int(string number){
	while((int)number[number.size()-1] < 48 || (int)number[number.size()-1] > 57){
		number = number.substr(0,number.size()-1);
	}
	int ergebnis = 0;		
	for(double i = 0; i < number.size(); i++){
		char c = number[i];
		//cout << number[i] << "   " << c << "  ";
		int f = (int)c - 48;
		int neueZahl = f * (int) pow(10.0, number.size() -i -1);
		cout << ergebnis << endl;

		//cout << neueZahl << endl;
		ergebnis = ergebnis +  neueZahl;}
	return ergebnis;}
		 

int main(){
	string s;
	int vz = 1;
	cout << "Geben Sie hier eine Zahl ein:   ";
	getline(cin,s);
	while(s[0] == '+' || s[0] == '-' || s[0] == ' '){
		if(s[0] == '-') vz = (-1);
		if(s[0] == '+' || s[0] == '-' || s[0] == ' ') s = s.substr(1);}
	int ergebnis = parse_int(s) * vz;
	cout << ergebnis << endl;
	return 0;
}


