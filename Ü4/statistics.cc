#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include "statistics.hh"

double mean(const std::vector<double>& v){ //1b
	double summe, ergebnis;
	for(double i : v){
		summe += i;
	}
	ergebnis = summe / v.size();
	return ergebnis;
}

double median(const std::vector<double>& v){ //1a²
	std::vector <double> vNeu = v;
	std::sort (vNeu.begin(), vNeu.end());
	int size = v.size();
	if(size == 0){
		return 0;
	}else if(size%2 == 1){
		double median = vNeu[(size)/2-1];
		return median;
	}else{
		double median = ((vNeu[(size)/2-1] + vNeu[((size)/2)]))/2;
		return median;
	}
}

double moment(const std::vector<double>& v, int k){ // 1b²
	double moment = 0;
	int size = v.size();
	for(int i = 0; i<size; i++){
		moment += pow(v[i], k); 
	}moment /= size;
	return moment;
}

double standard_deviation(const std::vector<double>& v){ // 1c
	double temp = mean(v);	//temp = μ =SUMME(v)/N
	double summe;
	for(double i : v){
		summe += pow((i-temp),2);
	}
	double ergebnis1 = summe / v.size();	//SUMME((v-μ)²)/N
	double ergebnis = pow(ergebnis1, 0.5);	//(SUMME((v-μ)²)/N)^(1/2)

	std::cout << ergebnis1 << " " <<ergebnis<<"\n";

	double test = moment(v,2) - (temp * temp);			//Test
	std::cout << test << "\n\n";						//Test
	if(test != ergebnis1) std::cout << "Fehler!\n";		//Test

	return ergebnis;
}