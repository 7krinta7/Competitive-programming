//1878A - How Much Does Daytona Cost?
//https://codeforces.com/problemset/problem/1878/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k){
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        int check=0;
        for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==m){
            check=1;
        }
        }
        if(check)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        k--;
    }
}