#
# @lc app=leetcode.cn id=172 lang=python3
#
# [172] 阶乘后的零
#

# @lc code=start
class Solution:
    def trailingZeroes(self, n: int) -> int:
        count=0
        while(n>0):
            count+=n//5
            n//=5
        return count
# @lc code=end

