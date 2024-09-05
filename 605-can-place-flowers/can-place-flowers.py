class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        

            i=1
            count=0
            flowerbed.insert(0,0)
            flowerbed.append(0)
            while(i<len(flowerbed)-1):
                if(flowerbed[i-1] !=1 and flowerbed[i+1]!=1 and flowerbed[i]!=1):

                    flowerbed[i]=1
                    count+=1
                    
                    i+=2
                else:
                    i+=1
            print(n,count)
            if (n<=count): 
                return True
            else: 
                return False
                

                


            
        