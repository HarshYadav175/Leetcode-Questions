class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // To handle cases where k is larger than n
        
        reverse(nums.begin(), nums.end()); // Reverse the entire vector
        reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
        reverse(nums.begin() + k, nums.end()); // Reverse the remaining elements after the first k
    }
};
