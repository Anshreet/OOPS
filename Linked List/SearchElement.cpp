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

    int key=20;
    Node* temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            cout<<"Found";
            break;
        }
        temp=temp->next;
    }
}