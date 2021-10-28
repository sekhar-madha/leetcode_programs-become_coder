class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        l=[x for i in grid for x in i if x<0]
        return len(l)
