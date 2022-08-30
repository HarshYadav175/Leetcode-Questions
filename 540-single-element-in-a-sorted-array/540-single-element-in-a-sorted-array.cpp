class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x = 0;
        for(auto i: nums)x = x ^ i; // taking XOR will make all duplicate elements 0
        return x; // finally x will contain only element which appeared only once
    }
};