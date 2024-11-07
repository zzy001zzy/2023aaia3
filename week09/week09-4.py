class Solution:
    def average(self, a: List[int]) -> float:
        return (sum(a)-min(a)-max(a))/(len(a)-2)