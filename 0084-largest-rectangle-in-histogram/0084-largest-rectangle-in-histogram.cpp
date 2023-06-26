#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int pseudoindex = -1;
        vector<int> left;
        stack<pair<int, int>> s;

        for (int i = 0; i < heights.size(); i++) {
            if (s.size() == 0) {
                left.push_back(pseudoindex);
            }
            else if (s.size() > 0 && s.top().first < heights[i]) {
                left.push_back(s.top().second);
            }
            else if (s.size() > 0 && s.top().first >= heights[i]) {
                while (s.size() > 0 && s.top().first >= heights[i]) {
                    s.pop();
                }
                if (s.size() == 0) {
                    left.push_back(pseudoindex);
                }
                else {
                    left.push_back(s.top().second);
                }
            }
            s.push({ heights[i], i });
        }

        vector<int> right(heights.size());
        stack<pair<int, int>> s1;

        for (int i = heights.size() - 1; i >= 0; i--) {
            if (s1.size() == 0) {
                right[i] = heights.size();
            }
            else if (s1.size() > 0 && s1.top().first < heights[i]) {
                right[i] = s1.top().second;
            }
            else if (s1.size() > 0 && s1.top().first >= heights[i]) {
                while (s1.size() > 0 && s1.top().first >= heights[i]) {
                    s1.pop();
                }
                if (s1.size() == 0) {
                    right[i] = heights.size();
                }
                else {
                    right[i] = s1.top().second;
                }
            }
            s1.push({ heights[i], i });
        }

        int ans = 0;
        for (int i = 0; i < heights.size(); i++) {
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            ans = max(ans, area);
        }

        return ans;
    }
};
