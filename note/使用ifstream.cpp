#include<fstream>
using namespace std;
int main(){
    ifstream in("./doc/a.in");
    ofstream out("./doc/a.out");
    for(string str;getline(in,str);){
        out<<str<<endl;
    }

}