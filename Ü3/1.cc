#include <iostream>
#include <cmath>
#include <vector>

void border(std::vector<double> v);
std::vector <double> reverse(std::vector<double> v);
void round(std::vector <double> & v);
void Swap(std::vector <double> & v);



int main(int argc, char const *argv[])
{
	std::vector <double> v = {1.21423,42.235,12.34655,12.54356};
	
	//border(v);
	//std::vector <double> vNeu = reverse(v);
	//round(v);
	//Swap(v);
	for(int i = 0; i< v.size();i++){						//Aufgabe 1a
		std::cout<<v[i]<<std::endl;
	}

	return 0;
}



void border(std::vector<double> v){							//Aufgabe 1b
	double max=0,min=v[0];
	for (double i : v){
		if(i <= min) min = i;
		else if(i >= max) max = i;
	}
	std::cout<< "Max: "<<max<< "\nMin: "<<min<<std::endl<<std::endl;
}

std::vector <double> reverse(std::vector<double> v){		//Aufgabe 1c
	std::vector<double> vNeu(v.size());
	for(int i = 0; i<v.size();i++){
		vNeu[v.size()-1-i] = v[i];
	}
	return vNeu;
}

void round(std::vector <double> & v){						//Aufgabe 1d
	for(int i= 0; i< v.size(); i++){
		v[i] = round(v[i]);
	}
}

void Swap(std::vector <double> & v){						//Aufgabe 1e
	for (int i = 0; i< v.size()/2 ; i++){
		std::swap (v[i], v[v.size()-i-1]);
	}
}
