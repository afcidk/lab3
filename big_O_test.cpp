#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include "Clock.h"
using namespace std;

double insertion_sort(vector<int>&);

int main() {

	vector<int> vec, tvec;
	FILE *fin;
	FILE *fout;

	for(int i = 0; i<4; ++i){
		vec.clear();
		char name[10];
		sprintf(name, "rand%d.in", i);
		int n;
		fin = fopen(name, "r");
		fout = fopen("README", "a");
		while(fscanf(fin, "%d", &n)!=EOF) vec.push_back(n);
		tvec = vec;
		/**************size=1000 10000 100000 1000000***************/
			/*O(n^2) by insertion sort*/
		fprintf(fout, "O(n^2) by insertion sort\tsize:%d\n", vec.size());
		fprintf(fout, "%lf\n", insertion_sort(vec)); //returns the time 


		vec = tvec;
			/*O(nlogn) by quick sort*/		
		Clock c;
		c.setStart();
		sort(vec.begin(), vec.end());
		fprintf(fout, "O(nlogn) by quick sort\t\tsize:%d\n", vec.size());
		fprintf(fout, "%lf\n", c.getTime());
		fprintf(fout, "\n\n");

		fclose(fin);
		fclose(fout);
	}


	return 0;
}

double insertion_sort(vector<int> &v){
	Clock clk;
	clk.setStart();

	int len = v.size();
	for(int i=0; i<len; ++i){
		int temp = v[i];
		for(int j=i-1; j>=0; --j){
			if(temp < v[j])	v[j+1] = v[j];
			else{
				v[j] = temp;
				break;
			}
		}
	}
	return clk.getTime();
}
