//1582B - Luntik and Subsequences
//https://codeforces.com/problemset/problem/1582/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        long long one=0,zero=0;
        for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1)
        one++;
        else if(v[i]==0)
        zero++;
        }
        long long ans=one*pow(2,zero);
        cout<<ans<<endl;
    }
}
