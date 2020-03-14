/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<string.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize){
    for(int i=digitsSize-1;i>=0;i--){
        digits[i]++;
        digits[i]%=10;
        if(digits[i]!=0) {
            *returnSize=digitsSize;
            return digits;
        }
    }
    int *result=(int*)realloc(digits,sizeof(int)*(digitsSize+1));
    memset(result,0,sizeof(int)*(digitsSize+1));
    // for(int i=0;i<digitsSize+1;i++){
    //     result[i]=0;
    // }
    result[0]=1;
    *returnSize=digitsSize+1;
    return result;
}


// @lc code=end

