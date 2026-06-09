//1878C - Vasilije in Cacak
//https://codeforces.com/problemset/problem/1878/C
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        long long n,k,x;
        cin>>n>>k>>x;
        if(x>=(k*(k+1))/2&&x<=(k*(2*n-k+1))/2)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
}
