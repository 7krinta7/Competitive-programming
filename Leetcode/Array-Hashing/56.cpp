//56. Merge Intervals
//https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i].first=intervals[i][0];
            v[i].second=intervals[i][1];
        }
        sort(v.begin(),v.end());
        int i=0;
        vector<vector<int>>ans;
        while(i<n){
            int j=i+1;
            int f=v[i].first,l=v[i].second;
            while(j<n&&l>=v[j].first){
                l=max(l,v[j].second);
                j++;
            }
            vector<int>v2={f,l};
            ans.push_back(v2);
            i=j;
        }
        return ans;
    }
};