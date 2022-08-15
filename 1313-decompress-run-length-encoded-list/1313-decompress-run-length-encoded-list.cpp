class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>b;
        for(int i=0;i<nums.size();i=i+2)
        {
            int a=nums[i];
            while(a>0)
            {
                b.push_back(nums[i+1]);
                a--;
            }
            
        }
        return b;
        
    }
};