class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if((mid<nums.size()-1)&&nums[mid+1]==nums[mid]&&mid%2==0)
            low=mid+1;
            else if(mid>0&&nums[mid-1]==nums[mid]&&mid%2)
            low=mid+1;
            else if(mid>0&&nums[mid-1]==nums[mid]&&mid%2==0)
            high=mid-1;
            else if((mid<nums.size()-1)&&nums[mid+1]==nums[mid]&&mid%2)
            high=mid-1;
            else{
            ans=nums[mid];
            break;}
        }
        return ans;
    }
};