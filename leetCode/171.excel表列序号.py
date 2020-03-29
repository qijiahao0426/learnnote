#
# @lc app=leetcode.cn id=171 lang=python3
#
# [171] Excel表列序号
#

# @lc code=start
class Solution:
    def titleToNumber(self, s: str) -> int:
        sum=0;
        l=len(s)
        i=0
        while(i<l):
            sum=(ord(s[i])-64)+sum*26
            i+=1
        return sum
# @lc code=end

