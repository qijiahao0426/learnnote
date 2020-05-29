/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                *returnSize=2;
                int* result=(int*)malloc(sizeof(int)*(*returnSize));
                *result=i;
                *(result+1)=j;
                return result;
            }
        }
    }    
    return NULL;
}


// @lc code=end

