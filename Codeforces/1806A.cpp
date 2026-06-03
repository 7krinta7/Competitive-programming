//1806A - Walking Master
//https://codeforces.com/problemset/problem/1806/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int m;
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d)
        m=-1;
        else if(c>a+(d-b))
        m=-1;
        else
        m=(d-b)+(a+(d-b)-c);
        cout<<m<<endl;
    }
}