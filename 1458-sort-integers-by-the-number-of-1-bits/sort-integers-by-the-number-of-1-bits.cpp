class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> v;
        for (int i = 0; i < arr.size(); i++) {
            int count = 0;
            int x = arr[i];
            while (x > 0) {
                if (x & 1) {
                    count++;
                }
                x >>= 1;
            }
            v.push_back({count, arr[i]});
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        for (int i = 0; i < v.size(); i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};