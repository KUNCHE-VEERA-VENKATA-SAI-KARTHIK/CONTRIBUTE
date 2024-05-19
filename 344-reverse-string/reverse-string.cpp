class Solution {
public:
    
    void reverseString(vector<char>& s) {

       stack <char> ch;
       int i=0;
       int n=s.size();

       for ( auto i : s)
       ch.push(i);

       while(!ch.empty())
       {
        s[i]=ch.top();
        ch.pop();
        i++;
       }

        
        
    }
};