//1777A - Everybody Likes Good Arrays!
//https://codeforces.com/problemset/problem/1777/A
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
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0)
            v[i]=0;
            else
            v[i]=1;
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1])
            count++;
        }
        cout<<count<<endl;
    }
}