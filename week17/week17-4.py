class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        n=len(nums)
        big,small=0,0
        for i in range(n-1):
            if nums[i]>nums[i+1]:big=1
            if nums[i]<nums[i+1]:small=1
        if big and small:return False
        return True