//1726A - Mainak and Array
//https://codeforces.com/problemset/problem/1726/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin>>k;
    while(k--){
         int n;
         cin>>n;
         vector<int>v(n);
         int mi=INT_MAX;
         int ma=INT_MIN;
         for(int i=0;i<n;i++){
         cin>>v[i];
         ma=max(ma,v[i]);
         mi=min(mi,v[i]);
         }
         int diff=INT_MIN;
         for(int i=0;i<n;i++)
             diff=max(diff,v[i]-v[(i+1)%n]);
        int c=max(v[n-1]-mi,diff);
        cout<<max(c,ma-v[0])<<endl;
    }
}