#include <iostream>
using namespace std;

int pow_iterative(int q, int n){
	int temp = q;
	if(n == 0) return temp;
	else if(n>=0){
		for(int i=1;i<n; i++){
			temp *= q;}
		return temp;}
	else return 0;
}

int pow_recursive(int q, int n){
	int ergebnis;
	if( n > 0){
		ergebnis = pow_recursive(q, n-1);
		ergebnis = ergebnis * q;}
	else if(n == 0){
		ergebnis = q * q;}
	else ergebnis = 0;
	return ergebnis;
}

int verbessert(int q, int n){
	int temp = q;
	if(n == 0) return temp;
	else if(n%2 == 0){
		for(int i=1;i<n/2; i++){
			temp = temp *q;}
		temp = temp * temp;}
	else if(n%2== 1){
		for(int i=1;i<n/2; i++){
			temp = temp *q;}
		temp = temp * (temp+1) ;}
	
	return temp;
}

int main(int argc, char ** argv){
	int base, exp;
	cout<< "Geben Sie die Basis ihrer Potenz ein: ";
	cin >> base;
	cout << "Geben Sie einen Exponenten ein: ";
	cin >> exp;

	/*int ergebnis1 = pow_iterative(base, exp);
	cout << ergebnis1 <<endl;

	int ergebnis2 = pow_recursive(base, exp-2);
	cout << endl << ergebnis2 <<endl;*/

	int ergebnis3 = verbessert(base, exp);
	cout << ergebnis3 << endl;
	return 0;
}