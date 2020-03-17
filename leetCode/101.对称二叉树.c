/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
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


int isSymmetric(struct TreeNode* root){
        return isMirror(root, root);
}

int isMirror(struct TreeNode* t1,struct TreeNode* t2){
        if (t1 == 0 && t2 == 0) return 1;
        if (t1 == 0 || t2 == 0) return 0;
        return (t1->val == t2->val)
                && isMirror(t1->right, t2->left)
                && isMirror(t1->left, t2->right);
}

// @lc code=end

