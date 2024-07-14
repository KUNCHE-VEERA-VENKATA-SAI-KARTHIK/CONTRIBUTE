class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        pref = [1]
        ans=[]

        suff=[nums[-1]]

        for i in range( 0,len(nums)):
            pref.append(pref[i]*nums[i])

        for i in range(1,len(nums)-1):
            suff.append(suff[i-1]*nums[len(nums)-1-i])
        
        suff = suff[::-1]
        suff.append(1)

        print(suff)
        print(pref)

        for i in range(0,len(nums)):
            ans.append(pref[i]*suff[i])

        return ans

        


        



        

        