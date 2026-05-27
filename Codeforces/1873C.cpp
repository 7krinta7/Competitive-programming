//1873C - Target Practice
//https://codeforces.com/problemset/problem/1873/C
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	while(k--){
    char arr[10][10];
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='X'){
                if((i==0&&j<10)||(j==0&&i<10)||(i==9&&j<10)||(j==9&&i<10))
                sum+=1;
                else if((i==1&&j<9&&j>0)||(j==1&&i<9&&i>0)||(i==8&&j>0&&j<9)||(j==8&&i<9&&i>0))
                sum+=2;
                else if((i==2&&j<8&&j>1)||(j==2&&i<8&&i>1)||(i==7&&j>1&&j<8)||(j==7&&i<8&&i>1))
                sum+=3;
                else if((i==3&&j<7&&j>2)||(j==3&&i<7&&i>2)||(i==6&&j>2&&j<7)||(j==6&&i<7&&i>2))
                sum+=4;
                else
                sum+=5;
            }
        }
    }
    cout<<sum<<endl;
}
}