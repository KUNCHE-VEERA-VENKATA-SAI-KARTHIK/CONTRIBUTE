class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int t = m * n;
        int s=0;
        int e= t-1;
        int mid,row,col;
        while(s<=e)
        {
            
            mid = s +(e-s)/2;
            col=mid%n;
            row=mid/n;
            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]>target)
            {
                e=mid-1;

            }
            else 
            {
                s=mid+1;

            }
            
           
        }
         return false;

        


        
        
    }
};