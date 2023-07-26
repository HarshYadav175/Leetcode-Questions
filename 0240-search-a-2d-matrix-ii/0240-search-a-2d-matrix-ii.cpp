class Solution {
public:
    bool binarySearchRow(const std::vector<int>& row, int target) {
        int left = 0;
        int right = row.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (row[mid] == target)
                return true;
            else if (row[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; ++i) {
            if (matrix[i][0] <= target && matrix[i][n - 1] >= target) {
                if (binarySearchRow(matrix[i], target))
                    return true;
            }
        }

        return false;
    }
};
