class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int x;
        vector <int> l;
        l.push_back(pref[0]);

        for( int i=1;i<pref.size();i++)
        {
            x=pref[i-1]^pref[i];
            l.push_back(x);
            



        }
        return l;
        
    }
};