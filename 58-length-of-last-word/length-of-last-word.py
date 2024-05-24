class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l=list(s.strip().split(" "))
        return len(l[-1])
        