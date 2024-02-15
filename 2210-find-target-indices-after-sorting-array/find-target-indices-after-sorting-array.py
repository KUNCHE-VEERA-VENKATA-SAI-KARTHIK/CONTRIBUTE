class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        if target not in nums:
            return []
        l = []
        nums.sort()
        
        k = nums.index(target)
        cnt = nums.count(target)
          # Assuming count is already calculated correctly
        while(cnt>0):
            l.append(k)
            k+=1
            cnt-=1
        return l



       

        



        