/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
#include<string.h>
char * longestCommonPrefix(char ** strs, int strsSize){
    // if(strsSize==0){
    //     return "";
    // }
    // char *str0=strs[0];
    // int l=0;
    // while(*str0){
    //     str0++;
    //     l++;
    // }
    // str0=strs[0];
    // for(int i=1;i<strsSize;i++){
    //     int j=0;
    //     while(*(str0+j)!='\0'&&*(strs[i]+j)!='\0'&&j<l){
    //         if(*(str0+j)!=strs[i][j]){
    //             break;
    //         }else{
    //             j++;
    //         }
    //     }
    //     l=j;

    //     if(l==0){
    //         return "";
    //     }
    // }
    // char string[10000];
    // strncpy(string, str0, l);
    // string[l]='\0';
    // return string;
    if(strsSize == 0)
        return "";
    char *ans = strs[0];
    int i, j;
    for(i = 1; i < strsSize; i++){
        j = 0;
        for(; ans[j] != '\0' && strs[i][j] != '\0'; j++){
            if(ans[j] != strs[i][j]){
                break;
            }
        }
        ans[j] = '\0';
        if(ans == NULL){
            return "";
        }
    }
    return ans;
}


// @lc code=end

