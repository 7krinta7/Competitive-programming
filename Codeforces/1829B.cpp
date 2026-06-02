//1829B - Blank Space
//https://codeforces.com/problemset/problem/1829/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        int m=INT_MIN;
        int a=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=0;i<n;i++){
            if(v[i]==0){
                a++;
            }
            else{
                m=max(m,a);
                a=0;
            }
        }
        m=max(m,a);
        cout<<m<<endl;
    }
}