class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        vector<int> ans1;
        vector<int> ans2;
        
        int n=nums.size();
       
        
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                ans.push_back(0);
                
            }
            else  if(nums[i]==1)
            {
                ans1.push_back(1);
                
            }
            else
                 {
                ans2.push_back(2);
                
            }
            
    
    }
        nums.clear();
            for(int i=0;i<ans.size();i++)
            {
                nums.push_back(ans[i]);
            }
        for(int i=0;i<ans1.size();i++)
            {
                nums.push_back(ans1[i]);
            }
        for(int i=0;i<ans2.size();i++)
            {
                nums.push_back(ans2[i]);
            }
    }
};