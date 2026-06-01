//1834A - Unit Array
//https://codeforces.com/problemset/problem/1834/A
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
        int neg=0,pos=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1)
            pos++;
            else
            neg++;
        }
        if(neg%2==0&&pos>=neg)
        cout<<0<<endl;
        else{
            if(neg%2!=0&&pos>=neg)
            cout<<1<<endl;
            else if(neg%2==0&&pos<neg){
                int c=0;
                while(pos<neg||neg%2!=0){
                    neg--;
                    pos++;
                    c++;
                }
                cout<<c<<endl;
            }
            else{
                int c=0;
                while(pos<neg||neg%2!=0){
                    neg--;
                    pos++;
                    c++;
                }
                cout<<c<<endl;
            }
        }
    }
}