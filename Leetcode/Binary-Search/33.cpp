//34. Find First and Last Position of Element in Sorted Array
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
     int low=0,high=nums.size()-1;
     int x=target;
     int ans=-1;
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
     return ans;   
    }
};