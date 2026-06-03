//1791C - Prepend and Append
//https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<char>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int i1=0,i2=n-1;
        while((v[i1]!=v[i2])&&i1<i2){
            i1++;
            i2--;
        }
        if(i1>i2)
        cout<<0<<endl;
        else
        cout<<i2-i1+1<<endl;
    }
}
