class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int k=0;
        for(auto i : nums)
        {
            s.insert(i);
        }
        for(auto itr=s.begin();itr!=s.end();itr++)
        {
            nums[k++]=*itr;


        }
        return k;
    }
};