#
# @lc app=leetcode.cn id=168 lang=python3
#
# [168] Excel表列名称
#

# @lc code=start
class Solution:
    def convertToTitle(self, n: int) -> str:
        res=""
        while (n):
            n,y=divmod(n,26)
            if(y==0):
                n-=1
                y=26
            res=chr(64+y)+res
        return res
# @lc code=end

