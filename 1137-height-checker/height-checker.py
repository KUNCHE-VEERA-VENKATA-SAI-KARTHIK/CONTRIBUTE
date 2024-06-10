class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        x=sorted(heights)
        r=0
        for i in range(len(x)):
            if x[i]!=heights[i]:
                r+=1
        return r