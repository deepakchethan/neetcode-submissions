class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int windowStart = 0;
        int windowEnd = 1;

        while (windowEnd < prices.size()) {
            if (prices[windowStart] < prices[windowEnd]) {
                int profit = prices[windowEnd] - prices[windowStart];
                maxProfit = max(profit, maxProfit);
            } else {
                windowStart = windowEnd;
            }
            windowEnd++;
        }

        return maxProfit;
    }
};
