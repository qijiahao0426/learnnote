/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */

// @lc code=start

#include<limits.h>
int maxSubArray(int* nums, int numsSize){
    int max=INT_MIN;
    // for(int i=0;i<numsSize;i++){
    //     int sum=0;
    //     for(int j=i;j<numsSize;j++){
    //         sum+=nums[j];
    //         if(sum>max){
    //             max=sum;
    //         }
    //     }
    // }
    int sum=0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
        if(max<sum){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max;
}


// @lc code=end

