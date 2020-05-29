#include<cstdio>
#include<algorithm>
int count=0;
const int maxn=11;
int n,P[maxn],hashTable[maxn]={0};
void generateP(int index){
    if(index==n+1){
        int flag=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(abs(i-j)==abs(P[i]-P[j])){
                    flag=0;
                }
            }
        }
        if(flag) count++;
        return;
    }
    for(int x=1;x<=n;x++){
        if(hashTable[x]==0){
            P[index]=x;
            hashTable[x]=1;
            generateP(index+1);
            hashTable[x]=0;
        }
    }
}

void generatePP(int index){
    if(index==n+1){
        count++;
        return;
    }
    for(int x=1;x<=n;x++){
        if(hashTable[x]==0){
            int flag=true;
            for(int pre=1;pre<index;pre++){
                if(abs(index-pre)==abs(x-P[pre])){
                    flag=0;
                    break;
                }
            }
            if(flag){
                P[index]=x;
                hashTable[x]=1;
                generatePP(index+1);
                hashTable[x]=0;
            }
        }
    }
}