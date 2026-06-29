//1471A - Strange Partition
//https://codeforces.com/problemset/problem/1471/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--){
	long long n,x;
	cin>>n>>x;
	long long sum1=0,sum2=0;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    sum1+=a;
	    if(a%x==0)
	    sum2+=a/x;
	    else
	    sum2+=a/x+1;
	}
	if(sum1%x==0)
	sum1/=x;
	else
	sum1=sum1/x+1;
	cout<<sum1<<" "<<sum2<<endl;
}
}