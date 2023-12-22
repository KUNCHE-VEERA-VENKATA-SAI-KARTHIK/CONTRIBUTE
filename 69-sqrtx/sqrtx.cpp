class Solution {
public:
    int mySqrt(int x) {
        int l=0;
        int h=x;
        long long int mid = l+(h-l)/2;
        int ans =-1;


        while(l<=h)
        {
         
          if(mid*mid==x)
          {
              return mid;
          }
          else if(mid*mid<x)
          {
              ans = mid;
              l=mid+1;
          
          }  
          else if(mid*mid>x)
          {
              h=mid-1;

          }
           mid = l+(h-l)/2;
        }
        return ans;



       
        
        
    }
};