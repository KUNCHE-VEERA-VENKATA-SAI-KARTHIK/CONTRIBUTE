class Solution:
    
    def letterCombinations(self, digits: str) -> List[str]:
        star=["","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"]

        def col(digits):


            if(len(digits)==0):

                return [""]

        
         
            ch = digits[0]
            rem=digits[1:]
       

            ret=col(rem)

            arr = []

        

            for cha in star[int(ch)]:
                for i in ret:
                    arr.append(cha+i)

            
        
            return arr

        if(len(digits)==0):

            return []

        return col(digits)


        

        

        