class Solution {
public:
    int cal(int n)
    {
        return n*1LL*(n+1)/2;
    }
    int arrangeCoins(int n) {
        int l=0;
        float k =sqrt(2*1LL*n);
        int h= ceil(k);
        int key;


        while(l<h)
        {
            int mid= l+(h-l)/2;
            if(cal(mid)==n)
            {
                return mid ;
            }
            else if(cal(mid)>n)
            {
                h=mid;
                key = h-1;

            }
            else if(cal(mid)<n){

                l=mid+1;
                key= l-1;




            }
           
        }




 return key;


        
    }
};