class Solution {
public:
      static string  str;
      static bool check(char c1, char c2)
      {
          return(str.find(c2)>str.find(c1));
          
      }
    string customSortString(string order, string s) {
        str = order;

        sort(s.begin(),s.end(),check);

        return s;

      
        
    }
};
string Solution::str;