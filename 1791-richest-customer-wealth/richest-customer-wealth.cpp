class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int max=INT_MIN;


        for(int i =0; i < accounts.size(); i++)
        {


        
            for(int j =0; j<accounts[0].size();j++)
            {
                sum=sum+accounts[i][j];
            }
            
            if(max<sum)
            {
                max=sum;
                
            }
            sum =0;
        }
        
        return max;
    }
};