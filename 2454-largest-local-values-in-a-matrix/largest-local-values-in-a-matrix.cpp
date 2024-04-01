class Solution {
public:
  int griding(vector<vector<int>>& grid, int m, int n) {
    int max = INT_MIN;
    for (int i = m-3; i < m; i++) {
        for (int j = n-3; j < n; j++) {
            if (grid[i][j] > max)
                max = grid[i][j];
        }
    }
    return max;
}

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
       
         
       int n = grid.size();
    vector<vector<int>> ans(n - 2, vector<int>(n - 2));

    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            ans[i][j] = griding(grid, i+3, j+3);
        }
    }

    return ans;


        


        
    }
};