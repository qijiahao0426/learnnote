/*
 * @lc app=leetcode.cn id=107 lang=c
 *
 * [107] 二叉树的层次遍历 II
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


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
     if (!root){
        *returnSize = 0;
        *returnColumnSizes = 0;
        return 0;
    }
    int rear=0,front=-1,num,top,**ans,*q,*temp1,temp2;
    struct TreeNode **queue=(struct TreeNode**)malloc(sizeof(struct TreeNode*)*10000);;
    ans = (int**)malloc(sizeof(int*)*10000);
    q = (int*)malloc(sizeof(int)*10000);
    queue[rear] = root;
    top = -1;
    while(rear!=front){
        ans[++top] = (int*)malloc(sizeof(int)*(rear-front));
        q[top] = rear - front;
        for (int i=front+1;i<=rear;i++)
            ans[top][i-front-1] = queue[i]->val;
        num = 0;
        for (int i=front+1;i<=rear;i++){
            if (queue[i]->left)
                queue[rear+(++num)] = queue[i]->left;
            if (queue[i]->right)
                queue[rear+(++num)] = queue[i]->right;
        }
        front = rear;
        rear += num;
    }
    for (int i=0;i<(top+1)/2;i++){
        temp1 = ans[i];
        ans[i] = ans[top-i];
        ans[top-i] = temp1;
        temp2 = q[i];
        q[i] = q[top-i];
        q[top-i] = temp2;
    }
    *returnSize = top+1;
    *returnColumnSizes = q;
    return ans;
}


// @lc code=end

