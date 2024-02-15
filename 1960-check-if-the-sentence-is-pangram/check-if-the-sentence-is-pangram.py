class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        st="abcdefghijklmnopqrstuvwxyz"
        for i in st:
            if i not in sentence:
                return False
        return True

        
        