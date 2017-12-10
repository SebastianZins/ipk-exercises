#include <iostream>
using namespace std;

void collatz(int zahl){
	while(zahl!=1 && zahl!=0 && zahl!=-1 && zahl!=-5 && zahl != -17){
		if(zahl%2==0) zahl /= 2;
		else zahl=zahl*3 + 1;
	}
	cout << zahl << endl;
}

int main(int argc, char ** argv)
{
	int zahl;
	cout<<"Geben Sie eine Zahl ein"<<endl;
	cin>>zahl;

	collatz(zahl);
	//cout << zahl << endl;


	return 0;
}