class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>ans;
        ans.push_back(1);
        for(int i=1;i<=rowIndex;i++)
        {
            vector<int>v;
            v.push_back(1);
            for(int j=0;j<ans.size()-1;j++)
            {
                v.push_back(ans[j]+ans[j+1]);
            }
            v.push_back(1);
            ans=v;
        }
        return ans;
    }
};