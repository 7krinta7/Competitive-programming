//1543A - Exciting Bets
//https://codeforces.com/problemset/problem/1543/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        long long  a,b;
        cin>>a>>b;
        cout<<abs(a-b)<<" ";
        if((a-b)==0)
        cout<<0;
        else{
            long long n=min(a,b);
            cout<<min(n%abs(a-b),abs(a-b)-n%abs(a-b));
        }
        cout<<endl;
    }
}
