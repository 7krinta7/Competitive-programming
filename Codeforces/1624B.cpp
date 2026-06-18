//1624B - Make AP
//https://codeforces.com/problemset/problem/1624/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int k;
	cin>>k;
	while(k--){
	    int a,c,b;
	    cin>>a>>b>>c;
	    if(2*b-c>0&&(2*b-c)%a==0)
	    cout<<"YES";
	    else if(2*b-a>0&&(2*b-a)%c==0)
	    cout<<"YES";
	    else if((a+c)%2==0&&((a+c)/2)%b==0)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
}
