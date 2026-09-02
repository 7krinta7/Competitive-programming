//34. Find First and Last Position of Element in Sorted Array
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower=-1,higher=-1;
        int n=nums.size();
        int x=target;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=x){
                if(nums[mid]==x)
                lower=mid;
                high=mid-1;
            }
            if(nums[mid]<x){
                low=mid+1;
            }
        }
        low=0;high=n-1;
        while(low<=high){
           int mid=(low+high)/2;
            if(nums[mid]<=x){
                if(nums[mid]==x)
                higher=mid;
                low=mid+1;
            }
            if(nums[mid]>x){
                high=mid-1;
            }
        }
        return {lower,higher};
    }
};