class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l=[]
        f=0
        for i in range(len(nums)-1): # 0,1,2
            for j in range(i+1,len(nums)): # 1 2 3
                if(nums[i]+nums[j]==target):
                    l.append(i)
                    l.append(j)
                    f=1
                    break
            if(f==1):
                break
        return l      