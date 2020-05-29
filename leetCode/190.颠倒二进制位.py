#
# @lc app=leetcode.cn id=190 lang=python3
#
# [190] 颠倒二进制位
#

# @lc code=start
class Solution:
    def reverseBits(self, n: int) -> int:
        mask,ans=1,0
        for i in range(32):
            if n&mask:
                ans|=1 <<(31-i)
            mask<<=1
        return ans
# @lc code=end

