//2232A - Convergence
//https://codeforces.com/problemset/problem/2232/A
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
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        int left=0,right=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                if(v[i]!=v[n/2])
                    left++;
            }
            else if(i>n/2){
                if(v[i]!=v[n/2])
                    right++;
            }
        }
        cout<<max(left,right)<<endl;
    }
}