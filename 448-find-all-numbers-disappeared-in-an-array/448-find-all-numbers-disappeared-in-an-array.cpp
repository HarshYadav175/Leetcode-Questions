class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n=nums.size();
        
         vector<bool>res(n+1, false);
         vector<int>result;
        
        for(int i=0;i<n;i++){
            res[nums[i]]=true;
            }
        
        for(int j=1; j<res.size(); j++){
            if(res[j]==false){
                
                result.push_back(j);
            }
        }
        
        return result;
    }
};