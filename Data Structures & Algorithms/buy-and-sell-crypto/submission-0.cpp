class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();

        int maxProfit=0;
        int minPrice=prices[0];

      for (int i=0;i<size;i++) {
        minPrice=min(prices[i],minPrice);
        maxProfit=max(maxProfit,prices[i]-minPrice);
      }

        return maxProfit;
    }
};
