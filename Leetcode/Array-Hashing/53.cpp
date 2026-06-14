//53. Maximum Subarray
//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n=nums.size();
      int a=nums[0];
      int m=a;
      if(n==1)
      return nums[0];
      else{
      for(int i=1;i<n;i++){
        a=max(nums[i],a+nums[i]);
        m=max(m,a);
      }
      }
      return m;
    }
};