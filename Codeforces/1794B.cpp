//1794B - Not Dividing
//https://codeforces.com/problemset/problem/1794/B
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
         for(int i=0;i<n;i++){
         cin>>v[i];
         if(v[i]==1);
         v[i]++;
         }
         for(int i=0;i<n-1;i++){
             while(v[i+1]%v[i]==0){
                 v[i+1]++;
             }
             cout<<v[i]<<" ";
         }
         cout<<v[n-1]<<endl;
    }
}