class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sumPixel = 0;
        int line = 0;
        for (int i = 0; i < s.size(); i++) {
            if (sumPixel + widths[s[i] - 'a'] > 100) {
                line++;
                sumPixel = widths[s[i] - 'a'] ;
            }
            else {
                sumPixel += widths[s[i] - 'a'];
            }
        }
        if (sumPixel <= 100) line++;
        return {line, sumPixel};
    }
};