#include<stdio.h>

#include<string.h>
char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0){
        return "";
    }
    char *str0=strs[0];
    int l=0;
    while(*str0){
        str0++;
        l++;
    }
    str0=strs[0];
    for(int i=1;i<strsSize;i++){
        int j=0;
        while(*(str0+j)!='\0'&&*(strs[i]+j)!='\0'&&j<l){
            if(*(str0+j)!=strs[i][j]){
                break;
            }else{
                j++;
            }
        }
        l=j;

        if(l==0){
            return "";
        }
    }
    char string[10000];
    strncpy(string, str0, l);
    string[l]='\0';
    return string;
}


int main(){
    char *a[10000]={"flower","flow","flight"};
    char *b=longestCommonPrefix(a,3);
    printf("%s",b);
}