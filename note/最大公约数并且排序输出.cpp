/*
    辗转相除法：
    算法原理：若a除以b的余数为r , 则有 (a , b) = ( b ,r )  （(a,b)表示a和b的最大公约数）
    例：169与48的最大公约数求解过程

        169 = 48 * 3 + 25    —— (169 , 48) = (48 , 25)

        48 = 25 * 1 + 13 ——(48 , 25) = (25 , 13)

        25 = 13 * 1 + 12

        13 = 12 * 1 + 1

        12 = 1 * 12  + 0 ——(12 , 1 ) = 1 

        故最大公约数为 1  
*/

#include<iostream>
#include<vector>
#include<fstream> //文件输入
#include<algorithm>
using namespace std;

int gcd(int x,int y){
    return (y==0?x:gcd(y,x%y));
}

int main(){
    ifstream in("./doc/abc.txt");
    vector<int> v;
    for(int a,b;in>>a>>b;){
        v.push_back(gcd(a,b));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        cout <<v[i]<<" ";
    }
    cout <<v.back()<<endl;
}

