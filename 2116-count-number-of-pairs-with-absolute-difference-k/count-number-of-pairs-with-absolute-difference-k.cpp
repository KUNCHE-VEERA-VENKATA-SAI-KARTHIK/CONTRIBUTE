class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int i =0; 
        int j;
        int n=nums.size();
        int diff,count=0;
        while(i<n)
        {
            j=i+1;
           
            while(j<n)
        {
            
             diff = abs(nums[i]-nums[j]);
            if(diff==k)
            count++;
            
            
                j++;
            
        }
        i++;
        }
return count;
        
    }
};