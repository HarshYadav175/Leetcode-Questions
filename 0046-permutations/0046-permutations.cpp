class Solution {
    
    private:
    
    void recurpermute(int index, vector<int> &nums, vector<vector<int>> &ans){
        
        int n = nums.size();
        if(index == n-1){
            ans.push_back(nums);
            return;
        }
        
          for(int i = index; i<n; i++){
              swap(nums[index], nums[i]);
              recurpermute(index+1, nums, ans);
              swap(nums[index], nums[i]);
          }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        recurpermute(0, nums, ans);
        return ans;
        
    }
};