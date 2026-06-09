//1904A - Forked!
//https://codeforces.com/problemset/problem/1904/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int a,b,xa,ya,xb,yb;
        cin>>a>>b>>xa>>ya>>xb>>yb;
        vector<pair<long long,long long>>v;
        v={
            {a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}
        };
        set<pair<long long,long long>>k;
        for(auto [vx,vy]:v){
            k.insert({xa+vx,ya+vy});
        }
        set<pair<long long,long long>>q;
        for(auto [vx,vy]:v){
            q.insert({xb+vx,yb+vy});
        }
        long long ans=0;
        for(auto[x,y]:q){
            if(k.count({x,y}))
            ans++;
        }
        cout<<ans<<endl;
    }
}