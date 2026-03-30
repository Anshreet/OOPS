#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=new Node{10,NULL};
    head->next=new Node{20,NULL};

    Node* temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;

    delete temp->next;
    temp->next=NULL;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}