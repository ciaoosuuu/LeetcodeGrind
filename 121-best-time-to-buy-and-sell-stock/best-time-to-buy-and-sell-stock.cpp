class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max_p = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] - min > max_p) {
                max_p = prices[i] - min;
            }
            if (prices[i] < min) {
                min = prices[i];
            }
        }
        return max_p;
    }
};