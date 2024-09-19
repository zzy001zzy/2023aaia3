class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        count1=Counter(s)
        count2=Counter(t)
        for i in t:
            if i not in s or count1[i]<count2[i]:
                return i