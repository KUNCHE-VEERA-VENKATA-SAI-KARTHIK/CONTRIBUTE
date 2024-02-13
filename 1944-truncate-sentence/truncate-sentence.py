class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        l=s.split(" ")
        st=l[0]
        for i in range(1,k):
            st=st+" "+l[i]
        return st
        