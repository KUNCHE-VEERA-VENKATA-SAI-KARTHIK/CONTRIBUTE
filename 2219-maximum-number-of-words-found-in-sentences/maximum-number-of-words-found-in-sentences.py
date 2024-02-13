class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        temp=0
        for i in sentences:
            l=i.split(" ")
            if(len(l)>temp):
                temp=len(l)
        return temp

        