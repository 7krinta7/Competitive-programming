//1857A - Array Coloring
//https://codeforces.com/problemset/problem/1857/A
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
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%2!=0)
        cout<<"NO";
        else
        cout<<"YES";
        cout<<endl;
    }
}
