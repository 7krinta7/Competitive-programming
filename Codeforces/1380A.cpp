//1380A - Three Indices
//https://codeforces.com/problemset/problem/1380/A
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int k;
    	cin>>k;
    	while(k--){
    	    int n;
    	    cin>>n;
    	    vector<int>v;
    	    for(int i=0;i<n;i++){
    	        int x;
    	        cin>>x;
    	        v.push_back(x);
    	    }
    	    int a=-1,b=-1,c=-1;
    	    for(int i=1;i<n-1;i++){
    	        if(v[i]>v[i-1]&&v[i]>v[i+1]){
    	            a=i;b=i+1;c=i+2;
    	        }
    	    }
    	    if(a==-1)
    	    cout<<"NO"<<endl;
    	    else
    	    cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
    }
    
    }