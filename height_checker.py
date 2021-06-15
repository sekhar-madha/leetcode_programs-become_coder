class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        c=0
        for i in heights:
            h=heights.index(i)
            sh=sorted(heights).index(i)
            print(h,sh)
            if h!=sh:
                c+=1
        return c
            
