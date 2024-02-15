class Solution:
    def reverseWords(self, s: str) -> str:
        l=""
        s=s.split(" ")
        for i in s:
            l=l+i[::-1]+" "
        return l.rstrip(" ")
            
        