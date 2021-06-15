class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        a=sorted(target)
        sa=sorted(arr)
        if a==sa:
            return True
        else:
            return False
            
