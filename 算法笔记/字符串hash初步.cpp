

//大写字母组成的字符串转化成数字hash
int hashFunc(char S[],int len){
    int id=0;
    for(int i=0;i<len;i++){
        id=id*26+(S[i]-'A');
    }
    return id;
}

//大小写都有
int hashFunc2(char S[],int len){
    int id=0;
    for(int i=0;i<len;i++){
        if(S[i]>='A'&&S[i]<='Z'){
            id=id*52+(S[i]-'A');
        }else if(S[i]>='a'&&S[i]<='z'){
            id=id*52+(S[i]-'a')+26;
        }
    }
    return id;
}