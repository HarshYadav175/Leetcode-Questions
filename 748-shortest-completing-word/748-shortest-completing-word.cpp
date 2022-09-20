class Solution {
public:
	string shortestCompletingWord(string lP, vector<string>& words) {
        string ans = "AAAAAAAAAAAAAAAA";
        transform(lP.begin(), lP.end(), lP.begin(), ::tolower);
        for(auto &w : words){
            int alp[26] = {};
            bool okay = true;
            for(auto c : w) ++alp[c - 'a'];
            for(auto c : lP)
                if('a' <= c && c <= 'z' && !alp[c - 'a']--){
                    okay = false;
                    break;
                }
            if(okay && size(w) < size(ans)) ans = w;
        }
        return ans;
    }
};