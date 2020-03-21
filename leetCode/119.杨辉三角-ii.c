/*
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    *returnSize = rowIndex + 1;
    int* p = (int*)malloc(sizeof(int) * (rowIndex + 1));
    int pre=1;
    p[0]=1;
    for(int i=1;i<=rowIndex;i++){
        for(int j=1;j<i;j++){
            int tmp=p[j];
            p[j]=p[j]+pre;
            pre=tmp;
        }
        p[i]=1;
    }
    return p;
}


// @lc code=end

