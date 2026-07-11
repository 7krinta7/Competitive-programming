//1876A - Helmets in Night Light
//https://codeforces.com/problemset/problem/1876/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<pair<long long,long long>>v(n);
        vector<long long>a(n);
        vector<long long>b(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        v[i]={b[i],a[i]};
        sort(v.begin(),v.end());
        long long cost=p;
        long long shared=1;
        int i=0;
        while(shared<n&&i<n){
            if(v[i].first>=p){
            cost=cost+(n-shared)*p;
            shared=n;
            }
            else{
                cost+=min(n-shared,v[i].second)*v[i].first;
                shared+=min(n-shared,v[i].second);
                i++;
            }
        }
        cout<<cost<<endl;
    }
}
