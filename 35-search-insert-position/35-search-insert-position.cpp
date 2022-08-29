class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
            if (target < nums[0]) return 0;
    else if (target > nums[nums.size()-1]) return nums.size();
    int left = 0, right = nums.size(), mid;

    while (right > left) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if ((right - left) == 1 && nums[left] < target && nums[right] > target) 
            return right;
        if (nums[mid] < target) left = mid;
        else right = mid;

    }
    return nums.size();

    }
};