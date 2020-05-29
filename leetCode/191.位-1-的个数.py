#
# @lc app=leetcode.cn id=191 lang=python3
#
# [191] 位1的个数
#

# @lc code=start
class Solution:
    def hammingWeight(self, n: int) -> int:
        count=0
        mask=1
        for i in range(32):
            if(n&mask):
                count+=1
            mask<<=1
        return count
# @lc code=end

