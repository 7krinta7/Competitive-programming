//7. Reverse Integer
//https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        long long s=0;
       while(x){
        s=s*10+x%10;
        x=x/10;
       }
       if(s>pow(2,31)-1||s<-pow(2,31))
       return 0;
       return s;
    }
};