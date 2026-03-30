#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;

    cout<<"Value of a = "<<*p;

    return 0;
}