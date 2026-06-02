//1814A - Coins
//https://codeforces.com/problemset/problem/1814/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        long long n,k;
        cin>>n>>k;
        if(n%2==0)
        cout<<"YES"<<endl;
        else if(k%2==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}