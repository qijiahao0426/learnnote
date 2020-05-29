/*
 * @lc app=leetcode.cn id=112 lang=c
 *
 * [112] 路径总和
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

int hasPathSum(struct TreeNode* root, int sum){
    if(root==0) return 0;
    sum-=root->val;
    if(root->left==0&&root->right==0){
        if(sum==0) return 1;
        else return 0;
    }
    return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);
}


// @lc code=end

