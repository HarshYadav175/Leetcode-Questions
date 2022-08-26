class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maximum =0;
        int n=nums.size();
        //sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                count++;
            }
                else{
                    count=0;
                }
             
            
             maximum = max(maximum, count);
        }
        
        return maximum;
    }
};