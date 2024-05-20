class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        dic={}
        maxx=0
        suma=0
        for i in nums:
            if i in dic:

                dic[i]+=1
                if(dic[i]>maxx):
                    maxx=dic[i]
            else:
                dic[i]=1
        print(dic)
        print(dic.values())
        print(maxx)
       
        for i in dic.values():
            if(i==maxx):
                suma+=maxx

        if maxx==0:
            return len(nums)
        else:
            return suma



        