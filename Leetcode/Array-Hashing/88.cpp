//88. Merge Sorted Array
//https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v(m+n);
        v=nums1;
        int a=0,b=0;
        while(a<m&&b<n){
            if(v[a]>=nums2[b]){
                nums1[a+b]=nums2[b];
                b++;
            }
            else{
                nums1[a+b]=v[a];
                a++;
            }
        }
        if(a<m){
            while(a!=m){
                nums1[a+b]=v[a];
                a++;
            }
        }
        else{
            while(b!=n){
                nums1[a+b]=nums2[b];
                b++;
            }
        }
    }
};