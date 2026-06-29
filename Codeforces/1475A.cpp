//1475A - Odd Divisor
//https://codeforces.com/problemset/problem/1475/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--){
	long long n;
	cin>>n;
	while(n%2==0)
	n/=2;
	if(n>1&&n%2!=0)
	cout<<"YES";
	else
	cout<<"NO";
	cout<<endl;
}
}