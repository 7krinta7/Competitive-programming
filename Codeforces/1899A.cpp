//1899A - Game with Integers
//https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k){
        int n;
        cin>>n;
        if(n%3==0)
        cout<<"Second"<<endl;
        else
        cout<<"First"<<endl;
        k--;
    }
}
