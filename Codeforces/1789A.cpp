//1789A - Serval and Mocha's Array 
//https://codeforces.com/problemset/problem/1789/A
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
        bool check=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(v[i],v[j])<=2)
                check=true;
            }
        }
        if(check)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
}
