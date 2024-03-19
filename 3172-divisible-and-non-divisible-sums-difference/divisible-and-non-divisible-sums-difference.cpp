class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total = n*(n+1)/2;

       int  x=n/m;


        int dsum= m *(x*(x+1)/2);

        return total - dsum*2;

    }
};