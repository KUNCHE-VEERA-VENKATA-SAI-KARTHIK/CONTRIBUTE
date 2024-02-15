class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        m=[]
        for i in grid:
             m.extend(filter(lambda x : x<0,i))
        return len(m)
        
        