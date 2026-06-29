//1440B - Sum of Medians
//https://codeforces.com/problemset/problem/1440/B
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int k;
    	cin>>k;
    	while(k--){
    	    int n,t;
    	    cin>>n>>t;
    	    vector<int>v(n*t);
    	    for(int i=0;i<n*t;i++)
    	    cin>>v[i];
    	    int x=n/2+1;
    	    int i=n*t-x;
    	    long long sum=0;
    	    while(t--){
    	        sum+=v[i];
    	        i-=x;
    	    }
    	    cout<<sum<<endl;
    }
    }