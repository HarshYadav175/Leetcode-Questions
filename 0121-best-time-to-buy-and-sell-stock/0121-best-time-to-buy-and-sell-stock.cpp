class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum = prices[0];
        
        int maximum = 0;
        
        int n = prices.size();
        
        for(int i = 0; i<n; i++){
            
            int cost = prices[i] - minimum;
            
            maximum = max(maximum, cost);
            
            minimum = min(minimum, prices[i]);
            
        }
        
        return maximum;
    }
};