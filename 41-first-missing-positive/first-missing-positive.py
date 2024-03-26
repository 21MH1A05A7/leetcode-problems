class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        l=set()
        for i in nums:
            if(i>0):
                l.add(i)
        for i in range(1,len(nums)+1):
            if(i not in l):
                return i
        return len(nums)+1
