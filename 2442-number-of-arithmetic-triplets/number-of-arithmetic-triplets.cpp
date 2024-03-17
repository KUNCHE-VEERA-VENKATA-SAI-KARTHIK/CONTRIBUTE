class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        
        for(int i =0; i<nums.size();i++)
        {
           int search=nums[i]+diff;
           int search2=nums[i]+diff+diff;
           int c=0;


            
            for(int j = i+1 ; j<nums.size();j++)
            {
                
                if(search==nums[j])
                { c++;
                  search = search + diff;
                  if(c==2)
                  {count++;
                  break;

                  }
                    
                    
                    
                }
                else if(search <nums[j])
                {
                    break;
                }
                }
        }
     return count;   
    }
};