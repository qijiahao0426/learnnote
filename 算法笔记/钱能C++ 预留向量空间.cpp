#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<map>
using namespace std;
typedef multimap<int,int> Mmap;

int main(){
    ifstream in ("./doc/remainder.txt");
    vector<string> abc;
    abc.reserve(1100);//预留空间
    Mmap nums;
    int n=0;
    for(string s;getline(in,s);){
        istringstream sin(s);
        int num=0;
        for(string t;sin>>t;num++);
        if(num){
            nums.insert(Mmap::value_type(num,n++));//map容器会自动排序
            abc.push_back(s);
        }
    }
    for(Mmap::iterator it=nums.begin();it!=nums.end();++it){
        cout <<abc[it->second]<<endl;
    }
}