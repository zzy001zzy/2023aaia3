class Solution:
    def largestPerimeter(self, a: List[int]) -> int:
        a.sort(reverse=1)
        n=len(a)
        for i in range(n-2):
            if a[i]<a[i+1]+a[i+2]:return a[i]+a[i+1]+a[i+2]
        return 0