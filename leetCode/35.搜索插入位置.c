/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start


int searchInsert(int* nums, int numsSize, int target){
    int low=0,high=numsSize-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]<target){
            low=mid+1;
        }else if(nums[mid]>target){
            high=mid-1;
        }else{
            return mid;
        }
    }
    return low;
}


// @lc code=end

