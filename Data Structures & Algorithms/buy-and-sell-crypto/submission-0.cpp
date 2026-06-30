class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int ans = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            int mn = prices[i];      // buy price

            for(int j = i + 1; j < prices.size(); j++)
            {
                int mx = prices[j];  // sell price

                ans = max(ans, mx - mn);
            }
        }

        return ans;
    }
};