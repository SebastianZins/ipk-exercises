#include <iostream>
#include <string>
using namespace std;

bool isPrime(int number){
	bool prime;
	for(int i = 2; i < number; i++){
		if(number%i==0) {
			prime = false;
			return prime;}
		else prime = true;
	}
	return prime;
}

void printPrimes(int upto){
	if(upto<0) {
		cout << "Error: Primzahl nie negativ!" << endl;
		return;}
	else if(upto ==0) cout<< "Error: Keine Primzahl im Suchbereich!"<<endl;
	for(int c=1;c<= upto; c++){
		bool prime = isPrime(c);
		if(prime) cout<<c<<endl;
	}
}

int main(int argc, char ** argv)
{
	int max;
	cout << "Gib einen Höchstwert ein: ";
	cin >> max;
	printPrimes(max);
	return 0;
}