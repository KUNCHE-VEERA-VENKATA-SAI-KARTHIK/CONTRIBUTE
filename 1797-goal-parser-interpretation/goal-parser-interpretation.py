class Solution:
    def interpret(self, command: str) -> str:
        a=command.replace("()","o")
        b= a.replace("(al)","al")
        return  b

       
        