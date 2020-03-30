#
# @lc app=leetcode.cn id=189 lang=python3
#
# [189] 旋转数组
#

# @lc code=start
class Solution:
    def rotate(self, nums: [int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums) 
        k %= n
        self.res(nums,0,n-k-1)
        self.res(nums,n-k,n-1)
        self.res(nums,0,n-1)
    
    def res(self, nums, begin, end):
        while(begin<end):
            # nums[begin],nums[end]=nums[end],nums[begin]
            temp=nums[begin]
            nums[begin]=nums[end]
            nums[end]=temp
            begin+=1
            end-=1
# @lc code=end

