class Solution {
public:
void helper(int ind, vector<int> &nums, int ans, vector<int> &res)
    {
        if(ind == nums.size()){
            res.push_back(ans);
            return;
        }
        
        ans = ans ^ nums[ind];
        helper(ind+1,nums,ans,res);
        ans = ans ^ nums[ind];
        helper(ind+1,nums,ans,res);
    }
    
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        vector<int> res;
        helper(0, nums, ans, res);
        
        long long sum = 0;
        for(int i=0;i<res.size()-1;i++)sum+=res[i];
        return sum;
    }
};