#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;

    cout<<*p<<endl;

    p++;  // moves pointer

    cout<<"Pointer incremented";

    return 0;
}