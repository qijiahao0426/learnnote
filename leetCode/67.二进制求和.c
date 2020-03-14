/*
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
 */

// @lc code=start

char * addBinary(char * a, char * b){
    int length,length1=strlen(a),length2=strlen(b),sum=0,i=length1-1,j=length2-1,k,num;
    if(length1>length2)
        length=length1+1;
    else
        length=length2+1;
    char *c=(char *)malloc(sizeof(char)*(length+1));
    c[0]='0';c[length]='\0';
    k=length-1;
    while(i>-1||j>-1||sum)
    {
        num=(i>-1?a[i]-'0':0)+(j>-1?b[j]-'0':0)+sum;
        sum=0;
        if(num>1)
        {
            sum=1;
            num-=2;
        }
        c[k--]=num+'0';
        j--;i--;
    }
    if(c[0]=='0')
    {
        for(i=0;i<length-1;i++)
            c[i]=c[i+1];
        c[length-1]='\0';
    }
    return c;
}



// @lc code=end

