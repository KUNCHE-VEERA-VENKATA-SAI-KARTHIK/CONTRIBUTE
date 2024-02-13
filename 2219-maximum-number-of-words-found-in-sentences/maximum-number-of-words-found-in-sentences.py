class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        temp = 0
        for i in range(len(sentences)):
            sentences[i]=sentences[i].split(" ")
        return len(max(sentences,key=len))
