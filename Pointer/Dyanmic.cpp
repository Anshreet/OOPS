#include<iostream>
using namespace std;

int main(){
    int *p = new int;

    *p = 100;

    cout<<"Value="<<*p;

    delete p;

    return 0;
}