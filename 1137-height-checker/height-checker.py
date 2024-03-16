class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        kums=[]
        kums=heights[:]
        kums.sort()
        count=0
        for i in range(len(kums)):
            if(heights[i]!=kums[i]):
                count+=1
        return count
    


        