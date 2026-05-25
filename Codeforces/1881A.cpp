//1881A - Don't Try to Count
//https://codeforces.com/problemset/problem/1881/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int check=0;
        int count=0;
        int ans;
        for(int i=0;i<=5;i++){
            if(x.find(s)!=string::npos){
            check=1;
            ans=i;
            break;
            }
            else
            x=x+x;
        }
        if(check)
        cout<<ans<<endl;
        else
        cout<<-1<<endl;
        k--;
    }
}