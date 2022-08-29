class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> map;
        
        for(auto i : deck) {
            map[i]++;
        }
        
        int pre = -1;
        
        for(auto i : map) {
            if(pre == -1) pre = i.second;
            pre = gcd(pre,i.second);
        }
        
        if(pre < 2) return false;
        
        return true;
        
    }
};