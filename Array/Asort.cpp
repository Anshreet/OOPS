#include<iostream>
using namespace std;

int main(){
    int arr[5]={40,10,30,20,50};

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}