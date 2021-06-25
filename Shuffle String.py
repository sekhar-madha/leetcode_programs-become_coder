class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        e=0
        rs=""
        for i in range(len(s)):
            rs+=s[indices.index(e)]
            e+=1
        return rs
