//81. Search in Rotated Sorted Array II
//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int ans=-1;
        while((low<high)&&(nums[low]==nums[low+1]))
        low++;
        while((low<high)&&(nums[high]==nums[high-1]))
        high--;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
            ans=mid;
            break;}
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target&&target<=nums[mid])
                high=mid-1;
                else
                low=mid+1;
            }
            else{
                if(nums[mid]<=target&&target<=nums[high])
                low=mid+1;
                else
                high=mid-1;
            }
        }
        if(ans==-1)
        return false;
        else
        return true;
    }
};