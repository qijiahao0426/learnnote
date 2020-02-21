#include<stdio.h>
#include<string.h>
const int maxn=256;
int64_t judge(char str[]){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[maxn];
    while(gets(str)){
        int flag=judge(str);
        if(flag==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}