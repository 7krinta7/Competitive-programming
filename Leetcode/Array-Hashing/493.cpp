//493. Reverse Pairs
//https://leetcode.com/problems/reverse-pairs/
class Solution {
public:
    void merge(vector<int> &arr,int low,int high,int mid){
        vector<int>temp;
        long long left=low;
        long long right=mid+1;
        while(left<=mid&&right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(long long i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    int count(vector<int>&arr,int low,int high,int mid){
        int right=mid+1;
        int cnt=0;
        for(int i=low;i<=mid;i++){
            while(right<=high&&arr[i]>2LL*arr[right])right++;
            cnt+=right-(mid+1);
        }
        return cnt;
    }
    int mS(vector<int> &arr,int low,int high){
        int cnt=0;
        if(low>=high) return cnt;
        int mid=(low+high)/2;
        cnt+=mS(arr,low,mid);
        cnt+=mS(arr,mid+1,high);
        cnt+=count(arr,low,high,mid);
        merge(arr,low,high,mid);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mS(nums,0,nums.size()-1);
    }
};