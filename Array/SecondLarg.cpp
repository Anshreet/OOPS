#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,50,30,40,20};
    int max=0, sec=0;

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            sec=max;
            max=arr[i];
        }
        else if(arr[i]>sec && arr[i]!=max)
            sec=arr[i];
    }

    cout<<"Second Largest="<<sec;
}