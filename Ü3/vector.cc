#include <iostream>
#include <vector>
using namespace std;

void MaxV(vector<int> v){
	int max = 0;
	for(int i = 0; i< v.size(); i++){
		if(v[i] >= max) max=v[i];
	}
	cout<< max<<endl;
}

vector<int> reverse(vector<int> v){
	vector <int> zwischen(v.size());
	for(int i = 0; i<v.size(); i++){
		zwischen[i] = v[v.size()-i-1];
	}
	return zwischen;
}

int main(int argc, char ** argv)
{
	vector<int> v = {1,5,8,9,3,5,2};
	vector<int> v1 = {6,8,3423,23456,23432};
	for(int i = 0; i < v.size();i++){
		cout<<v[i]<<" ";
	}
	cout <<endl;
	v = reverse(v);
	for(int i = 0; i < v.size();i++){
		cout<<v[i]<<" ";
	}
	cout <<endl;

	return 0;
}