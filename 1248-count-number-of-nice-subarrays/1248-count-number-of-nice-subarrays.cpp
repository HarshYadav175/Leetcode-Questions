class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int odd = 0,l = 0,ans = 0,i = 0;
        while(i<nums.size()){
            if(nums[i]&1) odd++;
            if(odd==k){
                int j = i+1;
                while(j<nums.size()&&!(nums[j]&1)) j++;
                while(odd == k){
                    if(nums[l++]&1) odd--;
                    ans+=j-i;
                }
                i = j;
            }
            else i++;
        }
        return ans;
    }
};