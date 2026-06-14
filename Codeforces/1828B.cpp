//1828B - Permutation Swap
//https://codeforces.com/problemset/problem/1828/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        vector<int>s;
        for(int i=0;i<n;i++){
            int a=abs(v[i]-(i+1));
            s.push_back(a);
        }
        int a=s[0];
        for(int i=0;i<n;i++)
        a=__gcd(a,s[i]);
        cout<<a<<endl;
    }
}