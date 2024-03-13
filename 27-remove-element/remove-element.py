class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        c=0
        l=[]
        for i in range(len(nums)):
            if(nums[i]!=val):
                nums[c]=nums[i]
                c+=1
        return c