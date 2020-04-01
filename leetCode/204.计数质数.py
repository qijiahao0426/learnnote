#
# @lc app=leetcode.cn id=204 lang=python3
#
# [204] 计数质数
#

# @lc code=start
class Solution:
    def countPrimes(self, n: int) -> int:
        nums = 0
        for i in range(2,n):
            if i == 2:
                nums += 1
                continue
            for j in range(2,int(i**0.5)+1):
                if i%j == 0:
                    break
            else:
                print(i)
                nums += 1
        return nums
# @lc code=end

