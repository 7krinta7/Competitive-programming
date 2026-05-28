//1858A - Buttons
//https://codeforces.com/problemset/problem/1858/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b)
        cout<<"First";
        else if(b>a)
        cout<<"Second";
        else{
            if(c%2==0)
            cout<<"Second";
            else
            cout<<"First";
        }
        cout<<endl;
    }
}
