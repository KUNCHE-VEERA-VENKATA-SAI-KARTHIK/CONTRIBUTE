class Solution {
public:
    string removeDuplicates(string s) {
        int i =0;
        string temp="";
        

        while(i<s.length())
        {
       
            if(temp.length()>0 && temp[temp.length()-1]==s[i] )

            {
                  temp.pop_back();
                    i++;

            }
            
            else
            {
                temp.push_back(s[i]);
                i++;
            }
             
        }
       return temp;

    }
};