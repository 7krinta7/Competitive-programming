//485. Max Consecutive Ones
//https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            count++;
            else{
                m=max(m,count);
            count=0;
            }
        }
        m=max(m,count);
        return m;
    }
};