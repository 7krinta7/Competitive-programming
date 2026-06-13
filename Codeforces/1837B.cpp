//1837B - Comparison String
//https://codeforces.com/problemset/problem/1837/B
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
        int count=0;
        int m=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1])
            count++;
            else{
                m=max(count,m);
                count=0;
            }
        }
        m=max(count,m);
        cout<<m+2<<endl;
    }
}