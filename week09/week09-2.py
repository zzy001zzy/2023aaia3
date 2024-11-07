class Solution:
    def diagonalSum(self, a: List[List[int]]) -> int:
        n=len(a)
        ans=0
        for i in range(n):
            ans+=a[i][i]
            ans+=a[i][-i-1]
        if n%2:ans-=a[n//2][n//2]
        return ans