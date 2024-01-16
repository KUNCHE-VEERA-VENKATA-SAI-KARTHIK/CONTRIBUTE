class Solution {
public:
    int bsearch(vector<int>& nums, int target, int h, int l) {
        if(h==l)
        {
            if(nums[l]==target)
            {
                return l;
            }
            else return -1;
        }
        if (h > l) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target)
                return mid;

            else if (nums[mid] > target) {
                return bsearch(nums, target, mid - 1, l);
            } else {  // Fix: Use nums[mid] < target here
                return bsearch(nums, target, h, mid + 1);
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        

        int k = bsearch(nums, target, h, l);

        return k;
    }
};
