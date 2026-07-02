//1374B - Multiply by 2, divide by 6
//https://codeforces.com/problemset/problem/1374/B
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int k;
    	cin>>k;
    	while(k--){
    	    int n;
    	    cin>>n;
    	    int c2=0,c3=0;
    	    while(n%3==0){
    	        n/=3;
    	        c3++;
    	    }
    	    while(n%2==0){
    	        n/=2;
    	        c2++;
    	    }
    	    if(n!=1)
    	    cout<<-1;
    	    else if(c2>c3)
    	    cout<<-1;
    	    else
    	    cout<<c3+(c3-c2);
    	    cout<<endl;
    }
    }