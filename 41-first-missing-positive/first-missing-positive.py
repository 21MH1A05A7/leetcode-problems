class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        s=set(nums for nums in nums if nums>0)
        for i in range(1,len(nums)+1):
            if i not in s:
                return i
        return len(nums)+1