//1675B - Make It Increasing
//https://codeforces.com/problemset/problem/1675/B
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	// your code goes here
    	 ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int k;
        cin>>k;
        while(k--){
             long long n;
             cin>>n;
             vector<long long>v(n);
             for(int i=0;i<n;i++)
             cin>>v[i];
             int count=0;
             int check=0;
             for(int i=n-2;i>=0;i--){
                 while(v[i]>=v[i+1]&&v[i]>0){
                     count++;
                 v[i]/=2;
                 }
                 if(v[i]>=v[i+1]){
                     check=1;
                     i=0;
                     break;
                 }
                 
                 
             }
             if(check)
             cout<<-1<<endl;
             else
             cout<<count<<endl;
        }
    }