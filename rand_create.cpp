#include<iostream>
#include<cstdio>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	int num;
	srandom(time(NULL));

	FILE *pFile;
	for(int j=0; j<4; ++j){
		char name[10];
		sprintf(name, "rand%d.in", j);
		pFile = fopen(name, "w");
		for(int i=0; i<pow(10,3+j); ++i){
			fprintf(pFile, "%d\n", random());
		}
		fclose(pFile);
	}

	return 0;
}
