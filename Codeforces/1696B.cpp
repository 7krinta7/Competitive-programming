//1696B - NIT Destroys the Universe
//https://codeforces.com/problemset/problem/1696/B
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	// your code goes here
    	 ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int k;
        cin>>k;
        while(k--){
             int n;
             cin>>n;
             vector<int>v(n);
             int check=1;
             int count=0;
             for(int i=0;i<n;i++){
                 int x;
                 cin>>x;
                 if(x!=0&&check){
                     count++;
                     check=0;
                 }
                 else if(x==0)
                     check=1;
             }
             if(count>=2)
             cout<<2<<endl;
             else
             cout<<count<<endl;
        }
    }