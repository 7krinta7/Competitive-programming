//9. Palindrome Number
//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int n=x;
        long long s=0;
        while(n){
            int digit=n%10;
            s=s*10+digit;
            n/=10;
        }
        if(s==x)
        return true;
        return false;
    }
};