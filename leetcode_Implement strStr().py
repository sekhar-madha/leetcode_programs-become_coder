class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if haystack=="" and needle=="":
            return 0
        elif haystack=="":
            return -1
        if needle in haystack:
            return haystack.index(needle)
        return -1
