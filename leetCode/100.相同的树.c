/*
 * @lc app=leetcode.cn id=100 lang=c
 *
 * [100] 相同的树
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
 

int isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p==0&&q==0) return 1;
    if(p==0||q==0) return 0;
    return p->val==q->val&&isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}




// @lc code=end

