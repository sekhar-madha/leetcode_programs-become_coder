class Solution:
    def balancedStringSplit(self, s: str) -> int:
        c,i=0,0
        rc,lc=0,0
        while True:
            if i==len(s):
                break
            if s[i]=="R":
                rc+=1
                i+=1
            elif s[i]=="L":
                lc+=1
                i+=1
            if lc==rc:
                c+=1
                lc=0
                rc=0
        return c
            
