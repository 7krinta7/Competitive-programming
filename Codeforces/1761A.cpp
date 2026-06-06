//1761A - Two Permutations
//https://codeforces.com/problemset/problem/1761/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n,a,b;
        cin>>n>>a>>b;
            if(a==b&&b==n)
            cout<<"YES";
            else if((n-max(a,b))<2)
            cout<<"NO";
            else if((n-max(a,b))<=min(a,b))
            cout<<"NO";
            else if((n-max(a,b))-min(a,b)<2)
            cout<<"NO";
            else
            cout<<"YES";
        cout<<endl;
    }
}