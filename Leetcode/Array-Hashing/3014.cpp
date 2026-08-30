//3014. Minimum Number of Pushes to Type Word I
//https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/
class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mp;
        int n=word.size();
        for(int i=0;i<n;i++){
            mp[word[i]]++;
        }
        vector<int>v;
        for(auto i:mp)
            v.push_back(i.second);
        sort(v.rbegin(),v.rend());
        int count=0;
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans+=(count/8+1)*v[i];
            count++;
        }
        return ans;
    }
};