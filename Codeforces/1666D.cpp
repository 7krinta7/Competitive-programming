//1666D - Deletive Editing
//https://codeforces.com/problemset/problem/1666/D
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	// your code goes here
    	 ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int k;
        cin>>k;
        while(k--){
             string a,b;
             cin>>a>>b;
             map<char,int>m;
             for(int i=0;i<b.size();i++)
                 m[b[i]]++;
             for(int i=a.size()-1;i>=0;i--){
                 if(m.find(a[i])==m.end()||m.find(a[i])->second==0)
                 a.erase(a.begin()+i);
                 else
                 m.find(a[i])->second--;
             }
             if(a==b)
             cout<<"YES"<<endl;
             else
             cout<<"NO"<<endl;
        }
    }