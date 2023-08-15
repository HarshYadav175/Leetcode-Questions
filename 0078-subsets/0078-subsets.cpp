class Solution {
    
    void solve(vector<int> nums, vector<vector<int>>& ans, int index, vector<int> output){
        
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        // exclude
        solve(nums, ans, index+1, output);
        
        // include
        
        output.push_back(nums[index]);
        solve(nums, ans, index+1, output);
        
    } 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    vector<vector<int>> ans;
    vector<int> output;
     int index = 0;   
        solve(nums, ans, index, output);
        
        return ans;
    }
};