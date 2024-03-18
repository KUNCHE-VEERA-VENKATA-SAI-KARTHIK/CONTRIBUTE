class Solution {
public:
static int bitsum(int n)
{
    int sum=0;
    while(n>0)
    {
      int rem = n%2;
      sum=sum+ rem;
      n=n/2;
    }
    return sum;

}
    vector<int> countBits(int n) {
        vector<int> arr;
        for( int i=0; i<=n;i++)
        {
            arr.push_back(bitsum(i));


        }

        return arr;
        
    }
};