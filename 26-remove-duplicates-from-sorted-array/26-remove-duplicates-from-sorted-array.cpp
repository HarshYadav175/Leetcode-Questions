class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(), nums.end());
        
        int i=0;
        for(int j=1; j<n; j++){
            if(nums[i]!=nums[j]){
                i++;
                    nums[i]=nums[j];
        }
        }
        return i+1;
        
    }
};