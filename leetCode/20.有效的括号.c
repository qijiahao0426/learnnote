/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=start

#include<string.h>
int isValid(char * s){
    if(s=="") return 1;
    char *stack=(char*)malloc(strlen(s));
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            stack[++top]=s[i];
        }else if(top>=0){
            if(s[i]==')'&&stack[top--]!='('){
                return 0;
            }else if(s[i]==']'&&stack[top--]!='['){
                return 0;
            }else if(s[i]=='}'&&stack[top--]!='{'){
                return 0;
            }
        }else if(top<0){
            return 0;
        }
    }
    if(top>=0) return 0;
    return 1;
}
/**
 * 
 * if(!s || s[0] == "")
        return 1;
    char* stk = (char*)malloc(strlen(s));
    int top = -1;
    int i;
    for(i = 0; s[i] != '\0'; i++){
        switch(s[i]){
            case '(':
            case '[':
            case '{':
                stk[++top] = s[i];
                break;
            case ')':
                if(top < 0 || stk[top--] != '(')
                    return 0;
                break;
            case ']':
                if(top < 0 || stk[top--] != '[')
                    return 0;
                break;
            case '}':
                if(top < 0 || stk[top--] != '{')
                    return 0;
                break;
        }
    }
    if(top >= 0)
        return 0;   
    return 1;

 **/

// @lc code=end

