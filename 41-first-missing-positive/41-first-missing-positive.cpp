class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( nums[i] > n || nums[i] < 1  ) 
                nums[i] = 0;
        }
        
        nums.push_back(0);
        for ( int i = 0; i <= n; i++ ) {
            while ( nums[nums[i]] != nums[i] ){
                swap ( nums[i], nums[nums[i]] );
            }
        }
        
        for ( int i = 1; i <= n; i++ ){
            if ( i != nums[i] ) 
                return i;
        }
        
        return n+1;
    }
};