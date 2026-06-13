//1855B - Longest Divisors Interval
//https://codeforces.com/problemset/problem/1855/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int k;
    cin>>k;
    while(k--){
        long long n;
        cin>>n;
        int i=1;
        while(n%i==0)
        i++;
        cout<<i-1<<endl;
    }
}