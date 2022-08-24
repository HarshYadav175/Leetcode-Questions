class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, -1));
        // i, horizontal and vertical defines the direction in which we are traversing
		// i = 0, left to right
		// i = 1, top to bottom
		// i = 2, right to left
		// i = 3, bottom to top
        int i = 0;
        int horizontal[] = {0, 1, 0, -1};
        int vertical[] = {1, 0, -1, 0};
        
		// Set boundaries
		// Each col idx should be greater than left and less than right
        int left = -1;
        int right = n;
        
		// Each row idx should be greater than top and less than bottom
        int top = -1;
        int bottom = n;
        
		// initial position
        int r = 0;
        int c = -1;
		
        int count = 0;
        while(count != n*n){
            // Next position
            int tempR = r + horizontal[i];
            int tempC = c + vertical[i];
            
			// if we are at the boundary, then traversal is complete in that direction
            // that means, that row or column is done and we can update the boundary accordingly
            if ( tempC<=left || right<=tempC || tempR<=top || bottom <= tempR){
				// if traversal was from left to right, then update top boundary
                if (i==0){
                    top++;
                }
                // if traversal was from top to bottom, then update right boundary
                else if (i==1){
                    right--;
                }
                // if traversal was from right to left, then update bottom boundary
                else if(i==2){
                    bottom--;
                }
                // if traversal was from bottom to top, then update left boundary
                else{
                    left++;
                }
                // change direction in clock-wise manner
                i++;
                i = i%4;
            }else{
                // if valid position, then update matrix
                r = tempR;
                c = tempC;
                matrix[r][c] = count+1;
                count++;
            }
        }
        return matrix;
    }
};