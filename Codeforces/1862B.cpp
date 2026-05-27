//1862B - Sequence Game
//https://codeforces.com/problemset/problem/1862/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	while(k--){
	    int n;
	    cin>>n;
	    vector<int>s(n);
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    cin>>s[i];
	    if(n==1)
	    v.push_back(s[0]);
	    else{
	        for(int i=0;i<n;i++){
	            if(i==0)
	            v.push_back(s[0]);
	            else{
	                if(s[i]<s[i-1]){
	                    v.push_back(1);
	                    v.push_back(s[i]);
	                }
	                else
	                v.push_back(s[i]);
	            }
	        }
	    }
	    cout<<v.size()<<endl;
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
}