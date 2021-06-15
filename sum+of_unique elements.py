class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        dic={}
        s=0
        for i in nums:
            dic[i]=nums.count(i)
        for k,v in dic.items():
            if v ==1:
                s+=k
        return s
            
        
