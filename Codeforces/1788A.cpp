//1788A - One and Two
//https://codeforces.com/problemset/problem/1788/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==2)
                sum++;
                v.push_back(sum);
        }
        if(v[n-1]%2!=0)
        cout<<-1<<endl;
        else{
        int i=0;
        while(v[i]!=v[n-1]/2)
        i++;
        cout<<i+1<<endl;
    }
    }
}