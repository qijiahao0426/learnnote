/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

// @lc code=start

#include<stdlib.h>
#include<string.h>
int climbStairs(int n){
    int *dp=(int*)malloc(sizeof(int)*(n+1));
    memset(dp,0,(n+1)*sizeof(int));
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}


// @lc code=end

