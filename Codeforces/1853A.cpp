//1853A - Desorting
//https://codeforces.com/problemset/problem/1853/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        long long m=INT_MAX;
        for(int i=0;i<n-1;i++){
            m=min(m,v[i+1]-v[i]);
        }
        if(m>=0){
            cout<<(m+2)/2<<endl;
        }
        else
        cout<<0<<endl;
    }
}