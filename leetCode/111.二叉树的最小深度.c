/*
 * @lc app=leetcode.cn id=111 lang=c
 *
 * [111] 二叉树的最小深度
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

int minDepth(struct TreeNode* root){
    if(root==0) return 0;
    return depth(root);
}

int depth(struct TreeNode* root){
    if(root==0) return 0;
    int l=depth(root->left);
    int r=depth(root->right);
    if(l==0&&r!=0) return r+1;
    if(r==0&&l!=0) return l+1;
    return (l<r?l:r)+1;
}

// @lc code=end

