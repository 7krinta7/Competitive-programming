//1537B - Bad Boy
//https://codeforces.com/problemset/problem/1537/B
#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ma=max({abs(c-1)+abs(d-1),abs(c-a)+abs(d-1),abs(c-1)+abs(d-b),abs(c-a)+abs(d-b)});
	int x1,x2,x3,x4;
	if(ma==abs(c-1)+abs(d-1)){
	x1=1;x2=1;
	}
	else if(ma==abs(c-a)+abs(d-1)){
	    x1=a;x2=1;
	}
	else if(ma==abs(c-1)+abs(d-b)){
	    x1=1;x2=b;
	}
	else{
	    x1=a;x2=b;
	}
	if(x1==1)
	x3=a;
	else
	x3=1;
	if(x2==1)
	x4=b;
	else
	x4=1;
	cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
}
}