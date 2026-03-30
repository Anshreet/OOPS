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
    head=head->next;
    delete temp;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}