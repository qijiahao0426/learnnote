#include<stdio.h>
#include <stdlib.h>
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
    }
    }
    if(top>=0) return 0;
    return 1;
}

int main(){
    char a[10]="{[()]}";
    printf("%d",isValid(a));
    return 0;
}