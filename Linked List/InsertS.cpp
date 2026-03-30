#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=NULL;

    Node* n=new Node;
    n->data=10;
    n->next=head;
    head=n;

    cout<<head->data;
}