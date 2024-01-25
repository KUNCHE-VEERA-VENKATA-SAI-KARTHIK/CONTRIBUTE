class Solution {
public:
    int strStr(string haystack, string needle) {
       int n = haystack.length();

       int k=needle.size();
       int i=0;

       while(i+k<=n)
       {
           cout<<haystack.substr(i,k);
           if(haystack.substr(i,k)==needle)
           {
               
               return i;
           }
           i++;
       }


       return -1;


        
        
    }
};