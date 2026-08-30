//153. Find Minimum in Rotated Sorted Array
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=nums[high]){
                ans=min(ans,nums[mid]);
                low=mid+1;
                
            }
            else{
                ans=min(ans,nums[mid]);
                high=mid-1;
                
            }
        }
        return ans;
    }
};