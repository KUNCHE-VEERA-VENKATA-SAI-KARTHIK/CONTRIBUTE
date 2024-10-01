class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        dic = defaultdict(int)

        for i in nums :
            dic[i]+=1
        j=0
        for i in dic.keys():
            nums[j]=i
            j+=1

        return len(dic.keys())



        