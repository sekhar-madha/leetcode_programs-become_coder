class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        s=list(s.split())
        return ' '.join(s[:k])
