//1373B - 01 Game
//https://codeforces.com/problemset/problem/1373/B
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int k;
    	cin>>k;
    	while(k--){
    	    string s;
    	    cin>>s;
    	    int c1=0,c0=0;
    	    for(int i=0;i<s.size();i++){
    	        if(s[i]=='1')
    	        c1++;
    	        else
    	        c0++;
    	    }
    	    if(min(c1,c0)%2==0)
    	    cout<<"NET";
    	    else
    	    cout<<"DA";
    	    cout<<endl;
    }
    }