#
# @lc app=leetcode.cn id=205 lang=python3
#
# [205] 同构字符串
#

# @lc code=start
class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        hashmap={}
        for i,j in zip(s,t):
            if i in hashmap and hashmap[i]!=j:
                return False
            elif i not in hashmap and j in hashmap.values():
                return False
            hashmap[i]=j
        return True

# @lc code=end

