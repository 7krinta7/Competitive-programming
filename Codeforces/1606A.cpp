#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        string s;
        cin>>s;
        int n=s.size();
        int sw=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1])
            sw++;
        }
        if(sw%2!=0){
            if(s[n-1]=='a')
            s[n-1]='b';
            else
            s[n-1]='a';
        }
        cout<<s<<endl;
    }
}
