/*
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnColumnSizes=malloc(numRows*sizeof(int));
    for(int i=0;i<numRows;i++){
        (*returnColumnSizes)[i]=i+1;
    }
    int **res=malloc(numRows*sizeof(int *));
    for(int i=0;i<numRows;i++){
        res[i]=malloc(sizeof(int)*(*returnColumnSizes)[i]);
        res[i][0]=1;
        res[i][(*returnColumnSizes)[i]-1]=1;
        if(i>1){
            for(int j=1;j<(*returnColumnSizes)[i]-1;j++){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
    }
    *returnSize=numRows;
    return res;
}


// @lc code=end

