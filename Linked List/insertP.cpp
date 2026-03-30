#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=new Node{10,NULL};
    head->next=new Node{20,NULL};

    int pos=1;
    Node* n=new Node{15,NULL};

    Node* temp=head;
    for(int i=0;i<pos-1;i++)
        temp=temp->next;

    n->next=temp->next;
    temp->next=n;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}