/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start

int isPalindrome(int x){
    if(x<0||(x%10==0&&x!=0)) return 0;
    int y=0;
    for(;x>y;){
        y=y*10+x%10;
        x/=10;
    }
    return x==y||x==y/10;
}


// @lc code=end

