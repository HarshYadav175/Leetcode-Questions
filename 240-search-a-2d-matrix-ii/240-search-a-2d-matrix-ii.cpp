class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        int j=matrix[0].size()-1;
       while(r<matrix.size() && j>=0){
           if(matrix[r][j]==target)
               return true;
        else if(matrix[r][j]<target)
             r++;
        else
             j--;
       }
        return false;
    }
};