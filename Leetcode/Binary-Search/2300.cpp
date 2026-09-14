//2300. Successful Pairs of Spells and Potions
//https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n=spells.size();
        int m=potions.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int low=0,high=m-1;
            int ans=0;
            while(low<=high){
                int mid=low+(high-low)/2;
                if((long long)potions[mid]*(long long)spells[i]<success)
                low=mid+1;
                else{
                    ans=m-mid;
                    high=mid-1;
                }
            }
            v.push_back(ans);
        }
        return v;
    }
};