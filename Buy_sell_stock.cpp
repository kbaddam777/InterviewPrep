
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_num = INT_MAX, max_profit = 0;
        
        for(int i=0; i<n; i++){
            max_profit = max(max_profit, prices[i]-min_num);
            min_num = min(min_num,prices[i]);
        }
        
        return max_profit;
    }
};
