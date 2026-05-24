//1896A - Jagged Swaps
//https://codeforces.com/problemset/problem/1896/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        if(v[0]!=1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        k--;
    }
}
