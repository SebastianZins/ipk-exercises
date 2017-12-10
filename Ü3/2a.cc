#include <iostream>
#include <cmath>
using namespace std;

double root_iterative(double q, double n, double step){
	double a;
	if(step == 0){
		a =1;
		a = a +((1/n) *((q/pow(a, n-1))-a));
	}
	else{
		a =  root_iterative(q,n,step-1);
		a = a + (1/n) *(q/pow(a, n-1)-a);
	}
	//cout << a << " " << step<< endl;
	return a;
}

void test_root(double q, int n, int steps){
	double a = root_iterative(q, n, steps);
	double A = (1/pow(a, n));
	double q_A = q - A;

	cout << "q = " << q << "; n = " << n << endl;
	cout << "a = q^n =       "<<a <<endl;
	cout << "A = a^(-1) =    "<< A << endl;
	cout << "q - A =         " << q_A << endl;
}

int main(int argc, char const *argv[])
{
	double base = 40.0;		//base ^ (1/exp)
	int exp = 2;
	int steps = 100;			//(n-te Potenz)
	if(steps == 0) cout << "Error: [steps < 1] min 1 Annäherungsversuche"<<endl;
	else if(exp == 0) cout << "Error: [exp = 0] divide by 0"<<endl;
	else test_root(base, exp, steps);

	return 0;
}