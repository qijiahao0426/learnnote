#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
    ifstream in("./doc/string.txt");
    for(string s,t;in>>s>>t;){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        cout <<(s==t ?"yes\n":"no\n");
    }
    return 0;
}