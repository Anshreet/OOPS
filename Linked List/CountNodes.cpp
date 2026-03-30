#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=new Node{10,NULL};
    head->next=new Node{20,NULL};
    head->next->next=new Node{30,NULL};

    int count=0;
    Node* temp=head;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    cout<<"Count="<<count;
}