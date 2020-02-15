#include<iostream>
using namespace std;
//内联函数
inline bool isnumber(char);

bool isnumber(char ch){
    return ch>='0'&&ch<='9';
}