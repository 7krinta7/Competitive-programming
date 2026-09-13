//2187. Minimum Time to Complete Trips
//https://leetcode.com/problems/minimum-time-to-complete-trips/
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        long long low=1,high=(long long)*min_element(begin(time),end(time))*totalTrips;
        long long ans;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long sum=0;
            for(int i=0;i<n;i++)
                sum+=mid/time[i];
            if(sum<totalTrips)
            low=mid+1;
            else{
            ans=mid;
            high=mid-1;
            }
        }
        return ans;
    }
};