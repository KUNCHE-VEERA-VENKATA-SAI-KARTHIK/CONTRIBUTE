class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
           map <string,vector<string>> np;
           vector<vector<string>> ans;

        for( auto str:strs)
        {
            string s= str;
            sort(s.begin(),s.end());
            np[s].push_back(str);
            

        }
        for(auto it=np.begin();it!=np.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
     
    }
};