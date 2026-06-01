//1837A - Grasshopper on a Line
//https://codeforces.com/problemset/problem/1837/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int x,k;
        cin>>x>>k;
        if(x%k)
            cout<<1<<endl<<x<<endl;
        else{
            cout<<2<<endl<<x-1<<" "<<1<<endl;
        }
    }
}