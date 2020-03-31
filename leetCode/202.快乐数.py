#
# @lc app=leetcode.cn id=202 lang=python3
#
# [202] 快乐数
#

# @lc code=start
class Solution:
    def isHappy(self, n: int) -> bool:
        def getNext(num):
            sum=0;
            while num>0:
                num,digit=divmod(num,10)
                sum+=digit**2
            return sum
        slow=n;
        fast=getNext(n);
        while slow!=fast:
            slow=getNext(slow)
            fast=getNext(getNext(fast))
        return fast==1
# @lc code=end

