class Solution:
    def firstUniqChar(self, s: str) -> int:
        dic={}
        for i in s:
            if i not in dic:
                dic[i]=1
            else:
                dic[i]+=1
        for i,j in dic.items():
            if j==1:
                return s.index(i)
        else:
            return -1
