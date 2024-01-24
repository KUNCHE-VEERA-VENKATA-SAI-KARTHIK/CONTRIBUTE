class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

      
        int n=nums.size();
        int count=0;
        int i;
        int j;



        for( i=0; i< n; i++)
        {
            // if(nums[i]>target)
            //     break;
            

            for (j=i+1; j<n ; j++)
            {
                // if(nums[j]>target)
                // break;
                if(nums[i]+nums[j]<target)
                {
                    count++;
                }

            }

        }
        
        return count;
        
    }
};