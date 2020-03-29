#
# @lc app=leetcode.cn id=169 lang=python3
#
# [169] 多数元素
#

# @lc code=start
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        l=len(nums)
        i=0
        temp=0
        n=0;
        while(i<l):
            if(n==0):
                temp=nums[i]
            if(nums[i]!=temp):
                n-=1
            else:
                n+=1
            i+=1
        return temp

# @lc code=end

