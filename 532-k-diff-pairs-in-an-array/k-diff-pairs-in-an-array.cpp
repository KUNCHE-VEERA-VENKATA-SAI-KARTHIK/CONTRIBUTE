class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>> ans;
        int n= nums.size();
        sort (nums.begin(),nums.end());
        int sum=0;

        int i=0 , j=i+1;
        int diff ;        
        while(j <n)
        {
            diff = abs(nums[i]-nums[j]);

            if(diff==k && j>i)
            {
                ans.insert({nums[i],nums[j]});
                cout<<nums[i]<<nums[j];
                i++;
                j++;
            }
            else  if(diff<k)
            {
                j++;
            }
        else  if(diff>k)
        {
            i++;


        }
        else if(i==j)
        j++;
        }
        return ans.size();
        
    }
};