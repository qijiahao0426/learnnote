#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student{
    char id[15];
    int score;
    int location_number;
    int local_rank;
}stu[30010];

bool cmp(Student a,Student b){
    if(a.score!=b.score) return a.score>b.score;
    else return strcmp(a.id,b.id)<0;
}

int main(){
    int n,k,num=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",stu[num].id,&stu[num].score);
            stu[num].location_number=i;
            num++;
        }
        sort(stu+num-k,stu+num,cmp);
        
    }
    return 0;
}