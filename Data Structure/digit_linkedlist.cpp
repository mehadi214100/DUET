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
    
public:
    Node *head;
    Linkedlist(){head=NULL;}

    
    void insert(int val){
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


    void printer(){
        Node* ptr = head;
        cout<<"Linked List Output :";
        while(ptr!=NULL){
            cout<<(ptr->val)<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }

    void sum(){
        int res = 0;
        Node* ptr = head;
        while(ptr!=NULL){
            res += ptr->val;
            ptr = ptr->next;
        }
        cout<<"Sum of Linkedlist value :"<<res<<endl;
        
    }

    void reverse(Node* &head,Node* curr){
        if(curr->next==NULL){
            head = curr;
            return;
        }
        reverse(head,curr->next);
        curr->next->next=curr;
        curr->next = NULL;
    }
};


int main(){
    Linkedlist l;
    int n;
    cout<<"Enter a Number :";
    cin>>n;
    vector<int>v;
    while (n>0)
    {
       v.push_back(n%10);
       n/=10;
    }
    for(int i=v.size()-1;i>=0;i--){
        l.insert(v[i]);
    }


    l.printer();
    l.sum();
    l.reverse(l.head,l.head);
    cout<<"After Reverse ";
    l.printer();
    return 0;
}