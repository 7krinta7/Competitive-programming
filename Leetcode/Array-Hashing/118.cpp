//118. Pascal's Triangle
//https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    long long ncr(int n,int r) {
        if(r==n||r==0)
    return 1;
        r=min(r,n-r);
    long long res = 1;
    for (int i = 1; i <= r; i++){
        res =res* (n-r+i)/i;
    }
    return res;
}
    vector<vector<int>> generate(int numRows) {
        int n=1;
        vector<vector<int>>v;
        while(n<=numRows){
            vector<int>a;
            for(int i=1;i<=n;i++)
            a.push_back(ncr(n-1,i-1));
            v.push_back(a);
            n++;
        }
        return v;
    }
};