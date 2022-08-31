class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
    int pTime = 0;
    
    pTime = duration;
        
    for (int i = 1; i < timeSeries.size(); i++)
    {
        pTime = pTime + duration;
        if (timeSeries[i - 1] + duration > timeSeries[i])
            pTime = pTime - (duration - (timeSeries[i] - timeSeries[i-1]));
        
    }
        
    return(pTime);
        
    }
};