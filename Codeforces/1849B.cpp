//1849B - Monsters
//https://codeforces.com/problemset/problem/1849/B
#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b){
    if(a.first>b.first)
    return true;
    else if(a.first<b.first)
    return false;
    else{
        if(a.second<b.second)
        return true;
        else
        return false;
    }
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            if(v[i].first%k)
            v[i].first%=k;
            else
            v[i].first=k;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end(),compare);
        for(int i=0;i<n;i++)
        cout<<v[i].second<<" ";
        cout<<endl;
    }
}
