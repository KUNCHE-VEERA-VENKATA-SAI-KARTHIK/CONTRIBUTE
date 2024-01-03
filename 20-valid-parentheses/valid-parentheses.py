class Solution(object):
    def isValid(self, s):
        flag=False
        if(len(s)%2==0):
            l=[]
            
            dic={"{":"}","[":"]", "(":")"}
            for i in s:
                if i in dic.keys():
                    l.append(i)
                elif i in dic.values():
                    if(len(l)>0 and i==dic[l[-1]]):
                        l.pop()
                        continue
                    else:
                        flag=False
                        return flag
            if(len(l)==0):
                flag=True
                return flag
            
        
        
                    

        