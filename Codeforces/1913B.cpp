//1913B - Swap and Delete
//https://codeforces.com/problemset/problem/1913/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    int z=0,o=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0')
	        z++;
	        else
	        o++;
	}
	int count=0;
	for(int i=0;i<n;i++){
	    if(s[i]=='0'&&o==0)
	    break;
	    else if(s[i]=='1'&&z==0)
	    break;
	    if(s[i]=='0')
	    o--;
	    else
	    z--;
	    count++;
	}
	cout<<n-count<<endl;
}
}