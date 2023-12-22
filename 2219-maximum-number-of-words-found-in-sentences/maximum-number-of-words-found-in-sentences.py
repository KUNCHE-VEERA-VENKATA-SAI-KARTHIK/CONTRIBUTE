class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max=0
        for i in range(0,len(sentences)):
            if(max<sentences[i].count(" ")):
                max=sentences[i].count(" ")
        return max+1

            
            
        