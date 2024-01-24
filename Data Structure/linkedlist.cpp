#include<bits\stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

class Linkedlist{
    Node *head;
public:
    Linkedlist(){head=NULL;}

    void insertHead(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }
    void insertTail(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head = newnode;
            return;
        }
        Node* ptr = head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next = newnode;
    }

    void insertmiddle(int pos,int val){
        Node* newnode = new Node(val);
        Node* ptr = head;
        for(int i=1;i<=pos-1;i++){
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }

    void deleteHead(){
        if(head==NULL){
            cout<<"Head Empty"<<endl;
            return;
        }
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    void printer(){
        Node* ptr = head;
        while(ptr!=NULL){
            cout<<(ptr->val)<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};


int main(){
    Linkedlist l;
    l.insertHead(40);
    l.insertHead(20);
    l.insertTail(25);
    l.printer();
    cout<<endl;
    l.insertmiddle(1,125);
    l.printer();
    l.deleteHead();
    l.printer();

    return 0;
}
