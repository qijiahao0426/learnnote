#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
    ifstream in("./doc/remainder.txt");
    for(string s,t,u;in>>s>>t;u=""){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        set_difference(s.begin(),s.end(),t.begin(),t.end(),back_inserter(u));
        cout <<u<<endl;
    }

    for(string s,t;in>>s>>t;){
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(t.find(s[i])==string::npos) cout <<s[i];
        }
        cout <<endl;
    }
}