//1593B - Make it Divisible by 25
//https://codeforces.com/problemset/problem/1593/B
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
        int x;
        int ans=INT_MAX;
        string arr[4]={"00","25","50","75"};
        for(int i=0;i<4;i++){
            int j=1;
            x=0;
            for(int k=n-1;k>=0;k--){
                if(j<0)
                break;
                else if(s[k]==arr[i][j])
                j--;
                else
                x++;
            }
            if(j>=0)
            x=INT_MAX;
            ans=min(ans,x);
        }
        cout<<ans<<endl;
    }
}
