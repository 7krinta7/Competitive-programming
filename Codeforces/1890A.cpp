//1890A - Doremy's Paint 3
//https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k){
        int n;
        cin>>n;
        map<int,int>m;
        vector<int>v(n);
        for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
        }
        int a,b,c=0;
        if(m.size()>2)
        cout<<"NO"<<endl;
        else{
            if(m.size()==1){
                cout<<"YES"<<endl;
            }
            else{
            for(auto x:m){
                if(c)
                b=x.second;
                else
                a=x.second;
                c++;
            }
            if(n%2==0){
                if(a==n/2&&b==n/2)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
            else{
                if(a==(n+1)/2&&b==n/2||a==n/2&&b==(n+1)/2)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
        }
        k--;
    }
}
