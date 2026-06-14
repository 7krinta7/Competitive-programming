//1807D - Odd Queries
//https://codeforces.com/problemset/problem/1807/D
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        int t_odd=0;
        vector<int>a;
        for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2!=0)
                t_odd++;
                a.push_back(t_odd);
        }
        while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int g;
        if(v[l-1]%2!=0)
        g=t_odd-(a[r-1]-a[l-1]+1);
        else
        g=t_odd-(a[r-1]-a[l-1]);
        if((g)%2==0){
            if(k%2!=0&&(r-l+1)%2!=0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else{
            if(k%2==0)
            cout<<"YES"<<endl;
            else if(k%2!=0&&(r-l+1)%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        }
    }
}