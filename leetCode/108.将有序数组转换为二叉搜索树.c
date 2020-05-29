/*
 * @lc app=leetcode.cn id=108 lang=c
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
#include <stdio.h>
#include <stdlib.h>
struct TreeNode* DFS(int *nums,int start,int end){
    if(start>end) return 0;
    int mid=start+(end-start)/2;
    struct TreeNode* root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val=nums[mid];
    root->left=DFS(nums,start,mid-1);
    root->right=DFS(nums,mid+1,end);
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return DFS(nums,0,numsSize-1);
}
// @lc code=end

