#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=new Node{10,NULL};

    Node* n=new Node{20,NULL};

    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=n;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}