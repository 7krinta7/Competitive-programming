//1877A - Goals of Victory
//https://codeforces.com/problemset/problem/1877/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k){
        int n;
        cin>>n;
        int sum=0;
        int a;
        for(int i=0;i<n-1;i++){
            cin>>a;
            sum+=a;
        }
        cout<<-sum<<endl;
        k--;
    }
}