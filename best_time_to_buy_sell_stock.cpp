class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int max_price = 0;
        for(int r = 0; r < prices.size(); ++r){
            if(prices[r] > prices[l]){
                int cur_price = prices[r] - prices[l];
                max_price = std::max(cur_price, max_price);
            }
            else{
                l = r;
            }
        }
        return max_price;   
    }
};
