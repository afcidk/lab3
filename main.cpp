#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;

bool cmp(int a, int b){return a>b;}

int main() {

	int n, ans=0;
	ifstream fin("file.in", ios::in);
	vector<int> vec;

	fin>>n;
	while(n--){
		int x;
		fin>>x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end(), cmp);

	for(int i=0; i<5; ++i)	ans+=vec[i];
	cout<<ans<<endl;

	return 0;
}
