#
# @lc app=leetcode.cn id=217 lang=python3
#
# [217] 存在重复元素
#

# @lc code=start
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        tmp=set()
        for i in nums:
            if i in tmp:
                return True
            tmp.add(i)
        return False

# @lc code=end

