//1607B - Odd Grasshopper
//https://codeforces.com/problemset/problem/1607/B
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	// your code goes here
    	ios::sync_with_stdio(false);
        cin.tie(nullptr);
    	int k;
    	cin>>k;
    	while(k--){
    	    long long a,n;
    	    cin>>a>>n;
    	    if(n==0)
    	    cout<<a;
    	    else if(a%2==0){
    	        if(n%2==0){
    	            if(n%4==0)
    	            cout<<a;
    	            else
    	            cout<<a+1;
    	        }
    	        else{
    	            if((n+1)%4==0)
    	            cout<<a+n+1;
    	            else
    	            cout<<a-n;
    	        }
    	    }
    	    else{
    	        if(n%2==0){
    	            if(n%4==0)
    	            cout<<a;
    	            else
    	            cout<<a-1;
    	        }
    	        else{
    	            if((n+1)%4==0)
    	            cout<<a-n-1;
    	            else
    	            cout<<a+n;
    	        }
    	    }
    	    cout<<endl;
    	}
    }
