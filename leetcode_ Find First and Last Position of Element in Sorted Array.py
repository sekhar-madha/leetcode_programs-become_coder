class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        i,j=0,len(nums)-1
        l=[-1,-1]
        while i<=j:
            if nums[i]==target and nums[j]==target:
                l[0],l[1]=i,j
                return l
            if nums[i]==target:
                l[0]=i
                j-=1
            elif nums[j]==target:
                l[1]=j
                i+=1
            else:
                i+=1
                j-=1
            if -1 not in l:
                return l
        return(l)
            
