/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
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

int maxDepth(struct TreeNode* root){
    return MAX(root,0);
}

int MAX(struct TreeNode* t,int max){
    if(t==0) return max;
    max++;
    int dl=MAX(t->left,max);
    int dr=MAX(t->right,max);
    if(dl>dr) max=dl;
    else max=dr;
    return max;
}


// @lc code=end

