class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        unordered_map<char,int> m1;
        for(int i=0;i<pattern.size();i++)
        {
            m1[pattern[i]]=i+1;
        }
        for(auto t:words)
            {
            int flag=0;
            unordered_map<char,int> m2;
            for(int i=0;i<t.size();i++)
            {
                m2[t[i]]=i+1;
            }
            for(int i=0;i<t.size();i++)
            {
                if(m1[pattern[i]]!=m2[t[i]])
                    flag=1;
            }
            if(flag==0)
                ans.push_back(t);
            else
                continue;
        }
       return ans;
    }
};