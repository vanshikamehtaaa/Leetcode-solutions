class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxp = 0;
        for(int i=0;i<prices.size();i++){
            int profit = prices[i] - buy;
            if(profit >maxp){
                maxp = profit;
            }
            if(prices[i]<buy){
                buy=prices[i];
            }
        }
        return maxp;
    }
};