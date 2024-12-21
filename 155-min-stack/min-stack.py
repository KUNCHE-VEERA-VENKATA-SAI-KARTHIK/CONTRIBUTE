class MinStack:
   

    def __init__(self):
        self.stack=[]
        

    def push(self, val: int) -> None:
        
        if len(self.stack)==0:
            self.stack.append((val,val))
        else:
            last= self.stack[-1]

            lmin= min(last[1],val)

            self.stack.append((val,lmin))





        

    def pop(self) -> None:
        if len(self.stack) >0:
            self.stack.pop()


        

    def top(self) -> int:
        return self.stack[-1][0]
        

    def getMin(self) -> int:
        if len(self.stack)==0:
            return
        else:
            return self.stack[-1][-1]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()