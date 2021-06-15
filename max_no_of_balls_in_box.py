class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        dic={}
        def sumofdigits(num):
            s=0
            if num<10:
                return num,1
            while num:
                r=num%10
                num=num//10
                s+=r
            return s,1
        for num in range(lowLimit,highLimit+1):
            k,v=sumofdigits(num)
            if k not in dic.keys():
                dic[k]=v
            else:
                dic[k]+=1
        return max(dic.values())
            
