/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start


int singleNumber(int* nums, int numsSize){
    int tmp=nums[0];
    for(int i=1;i<numsSize;i++){
        tmp=tmp^nums[i];
    }    
    return tmp;
}


// @lc code=end

