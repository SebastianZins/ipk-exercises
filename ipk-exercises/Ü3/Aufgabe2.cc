#include <iostream>
#include <vecor>
#include <cmath>
using namespace std;

double root_iterative(double q, double n, double steps){
	double a;
	if(steps== 0){
		a = 0;
		a = a + (1/n) * ((q/pow(a,n-1)) -a);}
	else {
		a = root_iterative(q,n,steps-1);
		a = a + (1/n) * ((q/pow(a,n-1)) -a);}
	return a;
}

int main(int argc, char const *argv[]){

	int steps = 100;
	int exp = 2;
	double base = 16.0;

	double  a = root_iterative(base, exp ,steps );
	cout << a << endl;
	return 0;
}