/*
 * @lc app=leetcode.cn id=110 lang=c
 *
 * [110] 平衡二叉树
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
#include<math.h>

 struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };
 
int isBalanced(struct TreeNode* root){
    if(root==0) return 1;
    return (abs(depth(root->left)-depth(root->right))<=1)&&isBalanced(root->left)&&isBalanced(root->right);
}

int depth(struct TreeNode* root){
    if(root==0) return 0;
    int l=depth(root->left);
    int r=depth(root->right);
    return (l>r?l:r)+1;
}


// @lc code=end

