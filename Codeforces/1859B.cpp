//1859B - Olya and Game with Arrays
//https://codeforces.com/problemset/problem/1859/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<vector<long long>>v;
        for(int i=0;i<n;i++){
            long long m;
            cin>>m;
            vector<long long>a(m);
            for(int i=0;i<m;i++)
            cin>>a[i];
            sort(a.begin(),a.end());
            v.push_back(a);
        }
        long long ans=0;
        long long M0=INT_MAX,M1=INT_MAX;
        for(int i=0;i<n;i++){
            M0=min(M0,v[i][0]);
            M1=min(M1,v[i][1]);
            ans+=v[i][1];
        }
        ans=ans-M1+M0;
        cout<<ans<<endl;
    }
}
