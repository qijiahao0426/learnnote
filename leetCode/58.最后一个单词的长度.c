/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start

#include<string.h>
int lengthOfLastWord(char * s){
    int num=0;
    int len=strlen(s);
    for(int i=len-1;i>=0;i--){
        if(s[i]==' '&&!num) continue;
        if(s[i]==' ') break;
        else{
            num++;
        }
    }
    return num;
}


// @lc code=end

