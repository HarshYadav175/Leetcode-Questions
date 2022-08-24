class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int arr[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> nums(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count=0;
                for(int k=0;k<8;k++){
                    int row = i+arr[k][0];
                    int col = j+arr[k][1];
                    if(row>=0&&col>=0&&row<m&&col<n&&board[row][col]==1)count++;
                }
                if(board[i][j]==1){
                    if(count==2||count==3)nums[i][j] = 1;
                }else{
                    if(count==3)nums[i][j] = 1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j] = nums[i][j];
            }
        }
        
    }
};