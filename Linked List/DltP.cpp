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

    int pos=1;

    Node* temp=head;
    for(int i=0;i<pos-1;i++)
        temp=temp->next;

    Node* del=temp->next;
    temp->next=del->next;
    delete del;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}