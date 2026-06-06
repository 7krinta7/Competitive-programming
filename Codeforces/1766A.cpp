//1766A - Extremely Round
//https://codeforces.com/problemset/problem/1766/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        int count=0;
        for(int i=1;i<=999999;i*=10){
            for(int j=1;j<=9;j++){
                int x=i*j;
                if(x<=n)
                count++;
            }
        }
        cout<<count<<endl;
    }
}