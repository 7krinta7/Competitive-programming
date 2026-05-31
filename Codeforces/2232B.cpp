//2232B - Cake Leveling
//https://codeforces.com/problemset/problem/2232/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<long long>v(n);
        vector<long long>s;
        long long sum=0;
        for(int i=0;i<n;i++){
        cin>>v[i];
        }
        s.push_back(v[0]);
        sum+=v[0];
        cout<<s[0]<<" ";
        for(int i=1;i<n;i++){
            sum+=v[i];
            s.push_back(min(sum/(i+1),s[i-1]));
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
}