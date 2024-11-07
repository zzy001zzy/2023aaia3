class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        app=[]
        for i in accounts:app.append(sum(i))
        return max(app)