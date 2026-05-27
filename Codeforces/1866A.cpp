//1866A - Ambitious Kid
//https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	vector<int>v(k);
	int m=INT_MAX;
	for(int i=0;i<k;i++){
	    cin>>v[i];
	    m=min(m,abs(v[i]));
	}
	cout<<m;
}