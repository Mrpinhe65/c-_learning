#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &b=a;
    cout<<&a<<endl;
    cout<<&b<<endl;
    return 0;
}