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
/*
int _climb(int n, int *arr)
{
    if (arr[n] != 0 ) return arr[n];
    arr[n] = _climb(n-1, arr) + _climb(n-2, arr);
    return arr[n];

}

int climbStairs(int n){

    //????
    if ( n <  0 ) return 0;
    if ( n <= 2) return n;
    int *arr = (int*)calloc(n+1, sizeof(int));
    arr[1] = 1;
    arr[2] = 2;
    return _climb(n , arr);

}
*/



// @lc code=end

