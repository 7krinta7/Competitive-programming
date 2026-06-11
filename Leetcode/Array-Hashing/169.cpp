//169. Majority Element
//https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>nums.size()/2)
            n=x.first;
        }
        return n;
    }
};