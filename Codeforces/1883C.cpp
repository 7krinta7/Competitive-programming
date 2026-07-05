//1883C - Raspberries
//https://codeforces.com/problemset/problem/1883/C
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int m=INT_MIN;
	    int x;
	    int count2=0;
	    int check=0;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        if(x%k==0)
	        check=1;
	        if(x%2==0)
	        count2++;
	        m=max(x%k,m);
	    }
	    int z=INT_MAX;
	    if(check)
	    cout<<0<<endl;
	    else if(k==4){
	        if(count2==0)
	        z=2;
	        else if(count2==1)
	        z=1;
	        else
	        z=0;
	        cout<<min(k-m,z)<<endl;
	    }
	    else
	    cout<<k-m<<endl;
}
}