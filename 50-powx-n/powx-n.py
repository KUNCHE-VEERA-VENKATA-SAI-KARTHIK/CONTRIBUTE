class Solution:


    def pow(self,x,n,dic):

        if n==1:
            return x
        if n==0:
            return 1

        dic[n//2]=pow(x,n//2,dic)

        return dic(n/2) * dic(n/2)

    def myPow(self, x: float, n: int) -> float:

        dic={}

        return pow(x,n)





        