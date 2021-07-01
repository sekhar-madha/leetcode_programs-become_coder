class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        mc=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        lst=[]
        m=""
        for i in words:
            for j in i:
                m=m+mc[ord(j)-97]
            print(m)
            if m in lst:
                m=""
                continue
            lst.append(m)
            m=""
        return len(lst)
