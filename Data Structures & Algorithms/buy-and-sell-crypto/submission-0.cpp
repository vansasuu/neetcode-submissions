class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //[10 , 1 , 5 , 6 ,7 ,1]

        if(prices.empty()) return 0; //if no profit then return zero

        int min_prices = prices[0] ; // first store minimum price
        int max_profit = 0;

        for(int i = 0; i < prices.size() ; i++) // loop to go through each
        {
            if(prices[i] < min_prices) // to store new min_prices
            {
                min_prices = prices[i];
            }
            else if( prices[i] - min_prices > max_profit) // if prices is big then minus it with when we got it if we got it to see if its better than profit
            {
                max_profit = prices[i] - min_prices; // max profit will be this now
            }
        }
        return max_profit; 
    }
};
