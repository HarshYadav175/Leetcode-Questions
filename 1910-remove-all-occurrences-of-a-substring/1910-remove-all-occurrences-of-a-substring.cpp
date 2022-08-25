class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int length = part.length();
        
        // find will be used to find a subarray in the string.
       while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part), length);
       }
        
        return s;
    }
};