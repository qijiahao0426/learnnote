#
# @lc app=leetcode.cn id=204 lang=python3
#
# [204] 计数质数
#

# @lc code=start
class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 3:
            return 0
        results = [1]*n
        results[0],results[1] = 0, 1
        for i in range(2,int(n**0.5)+1):
            if results[i] == 1:
                results[i*2:n:i] = [0]*len(results[i*2:n:i])
        return sum(results)-1
# @lc code=end

