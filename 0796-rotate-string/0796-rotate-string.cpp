class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        
        if (n != m) {
            return false;
        } else {
            string temp = s + s;
            return temp.find(goal) != std::string::npos;
        }
    }
};
