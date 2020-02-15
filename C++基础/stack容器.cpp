#include<fstream>
#include<iostream>
#include<sstream>
#include<stack>
using namespace std;
int main(){
    ifstream in("./doc/rail.txt");
    for(int n,line=0;in>>n&&n&&in.ignore();){
        cout <<(line++ ?"\n":"");
        for(string s;getline(in,s)&&s!="0";){
            istringstream sin(s);
            stack<int> st;
            for(int last=0,coach;sin>>coach;st.pop()){
                for(int p=last+1;p<=coach;++p) st.push(p);
                if(last<coach) last=coach;
                if(st.top()!=coach) break;
            }
            cout <<(!sin ?"yes\n":"no\n");
        }
    }
    return 0;
}