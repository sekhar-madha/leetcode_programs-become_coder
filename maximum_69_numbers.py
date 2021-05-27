class Solution:
    def maximum69Number (self, num: int) -> int:
        c=0
        temp=num
        while num:
            r=num%10
            num=num//10
            c+=1
        num=temp
        temp=0
        c=c-1
        while c!=-1 or num!=0:
            r=num//pow(10,c)
            num=num%pow(10,c)
            c-=1
            if r==6:
                r=9
                return temp+r*pow(10,c+1)+num
            else:
                temp=temp+r*pow(10,c+1)
        return temp
                
                
           
