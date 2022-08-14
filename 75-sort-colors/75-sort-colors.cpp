class Solution {
public:
    void sortColors(vector<int>& nums) {
      int low=0;  
        int high=nums.size()-1;
        int medium=0;  
        
        while(medium<=high) {
            switch(nums[medium]){
                case 0:
                    swap(nums[low++], nums[medium++]);
                    break;
                    
                case 1:
                    medium++;
                    break;
                    
                case 2:
                    swap(nums[medium], nums[high--]);
                        break;
            }
    }
    }
};