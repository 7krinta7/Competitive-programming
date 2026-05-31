//2232C2 - Seating Arrangement (Hard Version)
//https://codeforces.com/problemset/problem/2232/C2
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n,x,s;
        cin>>n>>x>>s;
        int ans=0;
        int ambi=0;
        int empty=0;
        for(int i=0;i<n;i++){
            char a;
            cin>>a;
            if(a=='I'){
                if(x){
                    x--;
                    ans++;
                    empty+=s-1;
                }
            }
            else if(a=='A'){
                if(empty){
                    empty--;
                    ambi++;
                    ans++;
                }
                else{
                    if(x){
                    ans++;
                    x--;
                    empty+=s-1;
                }
                }
            }
            else{
                if(empty){
                    empty--;
                    ans++;
                }
                else{
                    if(ambi&&x){
                        ambi--;
                        empty+=s-1;
                        ans++;
                        x--;
                    }
                }
            }
        }    
        cout<<ans<<endl;
    }
}