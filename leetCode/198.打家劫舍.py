#
# @lc app=leetcode.cn id=198 lang=python3
#
# [198] 打家劫舍
#

# @lc code=start
class Solution:
    def rob(self, nums: [int]) -> int:
        pre,cur=0,0
        for i in nums:
            cur,pre=max(i+pre,cur),cur
        return cur
# @lc code=end

