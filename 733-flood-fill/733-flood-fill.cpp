class Solution {
public:
	vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int color) {
		int m=a.size();
		int n=a[0].size();
		int c=a[sr][sc];
		function<void(int,int)> dfs=[&](int x,int y){
			if(x>=m||y>=n||x<0||y<0||a[x][y]==color||a[x][y]!=c) {
				return;
			}
			a[x][y]=color;
			dfs(x+1,y);
			dfs(x-1,y);
			dfs(x,y+1);
			dfs(x,y-1);
		};
		dfs(sr,sc);
		return a;
	}
};