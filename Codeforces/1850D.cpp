//1850D - Balanced Round
//https://codeforces.com/problemset/problem/1850/D
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        int m=INT_MIN;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i]<=k)
            count++;
            else{
            m=max(count,m);
            count=0;
            }
        }
        m=max(count,m);
        if(n==1)
        cout<<0;
        else
        cout<<n-m-1;
        cout<<endl;
    }
}