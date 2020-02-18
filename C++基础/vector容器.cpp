#include<fstream>
#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    ifstream in("./doc/rail.txt");
    for(int n,line=0;in>>n&&n&&in.ignore();){
        cout <<(line++ ? "\n":"");
        for(string s;getline(in,s)&&s!="0";){
            istringstream sin(s);
            vector<int> st;
            for(int last=0,coach;sin>>coach;st.erase(st.begin())){
                for(int p=last+1;p<=coach;++p) st.insert(st.begin(),p);
                if(last<coach) last=coach;
                if(st.front()!=coach) break;
            }
            cout <<(!sin ?"Yes\n":"No\n");
        }
    }
    return 0;
}