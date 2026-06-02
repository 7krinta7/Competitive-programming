//1831A - Twin Permutations
//https://codeforces.com/problemset/problem/1831/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cout<<n+1-x<<" ";
        }
        cout<<endl;
    }
}