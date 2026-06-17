//1665B - Array Cloning Technique
//https://codeforces.com/problemset/problem/1665/B
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	// your code goes here
    	 ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int k;
        cin>>k;
        while(k--){
             int n;
             cin>>n;
             vector<int>v(n);
             map<int,int>m;
             for(int i=0;i<n;i++){
                 cin>>v[i];
                 m[v[i]]++;
             }
             int ma=INT_MIN;
             for(auto it: m)
                 ma=max(ma,it.second);
            int ans=0;
             while(ma!=n){
                 ans++;
                 int a=min(ma,n-ma);
                 ans+=a;
                 ma+=a;
             }
             cout<<ans<<endl;
        }
    }