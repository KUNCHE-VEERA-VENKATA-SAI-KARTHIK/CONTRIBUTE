class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        maxx =-1
        l=[]
        l.append(-1)

        for i in range(len(arr)-1,0,-1):
            maxx=max(arr[i],maxx)
            l.insert(0,maxx)
        print(l)
        return l
        