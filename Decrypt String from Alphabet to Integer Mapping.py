class Solution:
    def freqAlphabets(self, s: str) -> str:
        st=""
        i=0
        while True:
            if "#" in s[i:i+3]:
                st+=chr(96+int(s[i:i+2]))
                i+=3
            else:
                st+=chr(96+int(s[i]))
                i+=1
            if i>=len(s):
                return st
