//1783A - Make it Beautiful
//https://codeforces.com/problemset/problem/1783/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<int>v(n);
        int check=true;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i!=0){
                if(v[i]!=v[i-1])
                check=false;
            }
        }
        if(check)
            cout<<"NO"<<endl;
        else{
            sort(v.begin(),v.end());
            sort(v.begin()+1,v.begin()+n,greater<int>());
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}