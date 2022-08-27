class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int i=0;int j=nums.size()/2;
        
        vector<int> temp(nums.size(),0);
        
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]>0)
            {
                temp[i]=nums[x];
                i++;
            }
            else
            {
                temp[j]=nums[x];
                j++;
            }
        }
       // for(auto x:temp) cout<<x<<" ";
        i=0;j=nums.size()/2;
        for(int x=0;x<nums.size();x++)
        {
            if(x%2==0)
            {
                nums[x]=temp[i];
                i++;
            }
            else
            {
                nums[x]=temp[j];
                j++;
            }
        }
        return nums;
        
    }
};