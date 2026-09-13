//875. Koko Eating Bananas
//https://leetcode.com/problems/koko-eating-bananas/
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int ans;
       long long low=1,high=(long long)*max_element(begin(piles),end(piles));
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=(long long)(ceil((double)piles[i]/(double)mid));
            }
            if(sum>h)
            low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};