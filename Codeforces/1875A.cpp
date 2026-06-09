//1875A - Jellyfish and Undertale
//https://codeforces.com/problemset/problem/1875/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=a)
            count+=a-1;
            else
            count+=x;
        }
        count+=b;
        cout<<count<<endl;
    }
}
