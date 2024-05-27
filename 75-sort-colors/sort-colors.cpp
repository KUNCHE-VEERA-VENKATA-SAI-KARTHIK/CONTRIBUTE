class Solution {
public:
    void sortColors(vector<int>& nums) {
           map<int,int>mp;

           for( auto i : nums)
           {
            mp[i]++;
           }
           int j =0;

           for(int i =0; i< 3; i++)
           {
            while(mp[i]>0)
            {
                nums[j++]=i;
                mp[i]--;
            }
    
           }

           
        
    }
};