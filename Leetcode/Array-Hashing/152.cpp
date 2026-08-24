//152. Maximum Product Subarray
//https://leetcode.com/problems/maximum-product-subarray/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=INT_MIN;
        int suffix=INT_MIN;
        int prod=1;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            prefix=max(prod,prefix);
            if(prod==0){
            prod=1;
            continue;}
            
        }
        prod=1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            suffix=max(prod,suffix);
            if(prod==0){
            prod=1;
            continue;}
            
        }
        return max(prefix,suffix);
    }
};