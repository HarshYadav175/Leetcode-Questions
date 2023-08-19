#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Sort both input vectors
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> result;
        int i = 0; // Pointer for nums1
        int j = 0; // Pointer for nums2

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                // Found a common element
                if (result.empty() || result.back() != nums1[i]) {
                    // Ensure uniqueness in the result
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        return result;
    }
};
