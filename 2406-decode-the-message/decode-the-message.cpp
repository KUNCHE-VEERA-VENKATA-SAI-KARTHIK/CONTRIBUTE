class Solution {
public:
    string decodeMessage(string key, string message) {
        char i='a';
        char mapping [280]={0}; //initailize every position with zero
        string ans;
        
        for ( auto ch : key)
        {
            if(ch!=' '&& mapping[ch]==0)
            {
                mapping[ch]=i;
                i++;

            }
            

        }
        for( auto m : message)
        {
            if(m ==' ')
            {
                ans.push_back(' ');
            }
            else
            {
                
                char decode=mapping[m];
                cout<< decode;
                ans.push_back(decode);
            }
        }
        
        return ans;
    }
};