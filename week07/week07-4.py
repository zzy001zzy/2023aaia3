class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a=s.split()#把字剪開
        return len(a[-1])#return 最後一組的長度