class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> store;
    vector<int> ans(2);
    
    for(int i=0;i<nums.size();i++){
        int x=target-nums[i];
        if(store[x]>0){
            ans[0]=i;
            ans[1]=store[x]-1;
            return ans;
        }
        store[nums[i]]=i+1;
    }
    
    return ans;
}
};