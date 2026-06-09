//1883B - Chemistry
//https://codeforces.com/problemset/problem/1883/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++)
        m[s[i]]++;
        int odd=0;
        for(auto x:m){
            if(x.second%2!=0)
            odd++;
        }
        if(odd<=k+1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}