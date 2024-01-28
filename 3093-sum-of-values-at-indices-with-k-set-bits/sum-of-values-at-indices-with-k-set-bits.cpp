class Solution {
public:
    int numberOfSetBits(int n)//Func 
    {
        int ans=0;
        while(n)
        {
            ans+=n&1;
            n>>=1;
        }
        return ans;
    }
    
    int sumIndicesWithKSetBits(vector<int>&a, int k) {
        int n=a.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            if(numberOfSetBits(i)==k)
            {
                sum+=a[i];
            }
            
        }
        return sum;
        
    }
};