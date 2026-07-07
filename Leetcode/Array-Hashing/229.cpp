//229. Majority Element II
//https://leetcode.com/problems/majority-element-ii/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v;
        int a=0,b;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                b=i;
                if(b-a+1>n/3)
                v.push_back(nums[i]);
                a=i+1;
            }
    }
    b=n-1;
    if(b-a+1>n/3)
    v.push_back(nums[n-1]);
    return v;
    }
};