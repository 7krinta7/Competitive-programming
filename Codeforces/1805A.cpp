//1805A - We Need the Zero
//https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        int total=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            total^=x;
        }
        if(n%2==0&&total!=0)
        cout<<-1<<endl;
        else if(n%2==0&&total==0)
        cout<<total<<endl;
        else if(n%2!=0){
            cout<<total<<endl;
        }
        
    }
}
