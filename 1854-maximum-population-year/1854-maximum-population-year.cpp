class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> years(100 + 1, 0);
        
        for(auto log : logs)
        {
            int s_year = log[0] - 1950;
            int e_year = log[1] - 1950;
            years[s_year] += 1;
            years[e_year] -= 1;
        }
        
        int prefix_sum  = 0;
        int max = 0;
        int result_year = 0;
        for(int i = 0; i < 101; i++)
        {
            prefix_sum += years[i];
            if(max < prefix_sum)
            {
                max = prefix_sum;
                result_year = i;
            }
            years[i] = prefix_sum;
        }
        
        return result_year + 1950;
    }
};