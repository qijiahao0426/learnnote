#include<typeinfo>
#include<iostream>
using namespace std;

int main(){
    cout << typeid(012).name();
}