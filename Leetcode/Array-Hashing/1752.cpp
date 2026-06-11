//1752. Check if Array Is Sorted and Rotated
//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
class Solution {
public:
    bool check(vector<int>& nums) {
        int x;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()])
            x=i;
        }
        x=(x+1)%nums.size();
        int check=0;
        int ans=true;
        int i=x;
        while((i+1)%nums.size()!=x||check!=1){
            if(i==x)
            check=1;
            if(nums[i]>nums[(i+1)%(nums.size())]){
            ans=false;
            break;
            }
            i=(i+1)%nums.size();
        }
        return ans;
    }
};