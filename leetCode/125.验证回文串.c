/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start


int isPalindrome(char * s){
    if(s=="") return 1;
    int str_len = strlen(s);
    char *str = (char *)malloc(sizeof(char)*str_len);
    int j=0;

    for(int i=0;i<str_len;i++){
        if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')) str[j++]=s[i];
        else if(s[i]>='A'&&s[i]<='Z') str[j++]=tolower(s[i]);
        else continue; 
    }
    
    for(int i=0;i<j/2;i++){
        if(str[i]!=str[j-i-1]) return 0;
    }
    return 1;
}


// @lc code=end

