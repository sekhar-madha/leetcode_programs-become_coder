class Solution:
    def sumBase(self, n: int, k: int) -> int:
        s=0
        while n:
            r=n%k
            n=n//k
            s=s+r
        return s
        
