class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        esum=0
        dsum=0
        for i in nums:
            esum=esum+i

            while(i>0):
                rem=i%10
                dsum=dsum+rem
                i=i//10

        return abs(esum-dsum)
            
        