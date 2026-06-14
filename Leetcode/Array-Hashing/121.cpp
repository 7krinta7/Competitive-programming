//121. Best Time to Buy and Sell Stock
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int m=0;
       int a=prices[0];
    for(int i=0;i<prices.size();i++){
        a=min(a,prices[i]);
        m=max(prices[i]-a,m);
    }
    return m;
    }
};