class Solution:
    def ncr(self,n,r):
        import math 

        return (math.factorial(n)//(math.factorial(n-r)*math.factorial(r)))

    def generate(self, numRows: int) -> List[List[int]]:
        
        l=[[1]]
        for i in range(1,numRows):
            innerl=[]
            for j in range(i+1):
                innerl.append(self.ncr(i,j))
                print(i , j , self.ncr(i,j))
            l.append(innerl)

        return l
           



        


        