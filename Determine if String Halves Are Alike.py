class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        l=int(len(s)/2)
        s1,s2=s[0:l],s[l:]
        vov=['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        c1,c2=0,0
        for i in s1:
            if i in vov:
                c1+=1
        for i in s2:
            if i in vov:
                c2+=1
        if c1==c2:
            return True
        else:
            return False
