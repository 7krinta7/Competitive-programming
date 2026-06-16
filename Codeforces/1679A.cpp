//1679A - AvtoBus
//https://codeforces.com/problemset/problem/1679/A
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	// your code goes here
    	 ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int k;
        cin>>k;
        while(k--){
             long long n;
             cin>>n;
             long long min,max;
             if(n%2!=0)
             cout<<-1<<endl;
             else if(n<4)
             cout<<-1<<endl;
             else{
                 max=n/4;
                 if(n%6==0)
                 min=n/6;
                 else
                 min=n/6+1;
                 cout<<min<<" "<<max<<endl;
             }
             
        }
    }