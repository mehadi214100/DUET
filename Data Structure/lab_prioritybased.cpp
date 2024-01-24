#include<bits\stdc++.h>
using namespace std;

class Node{
public:
    string name;
    int priority;
    int time;
    Node* next;

    Node(string name,int priority,int time){
        this->name = name;
        this->priority = priority;
        this->time = time;
        this->next = NULL;
    }

};

class Linkedlist{
    Node *head;
public:
    Linkedlist(){head=NULL;}


    void insert(string name,int priority,int time){
        Node* newnode = new Node(name,priority,time);
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

    void sortBypriority(){
        for(Node* temp = head;temp->next!=NULL;temp=temp->next){
            for(Node* ptr = temp->next;ptr!=NULL;ptr=ptr->next){
                if(temp->priority > ptr->priority){
                    swap(temp->name,ptr->name);
                    swap(temp->priority,ptr->priority);
                    swap(temp->time,ptr->time);
                }
            }
        }
    }
    void deleteBypriority(){
        if(head==NULL){
            cout<<"No data found !!"<<endl;
            return;
        }
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    void printer(){
        Node* ptr = head;

        while(ptr!=NULL){
            cout<<(ptr->name)<<" "<<(ptr->priority)<<" "<<(ptr->time);
            cout<<endl;
            ptr = ptr->next;
        }
    }
};

int main(){
    Linkedlist l;
    l.insert("Tomal",5,5);
    l.insert("Shuva",2,14);
    l.insert("Abul Basar",4,18);
    l.insert("Imran Raza",3,7);
    l.insert("Jahir",6,14);
    l.insert("Mehadi",1,37);
    l.printer();
    l.sortBypriority();
    cout<<"\nAfter Priority Apply:"<<endl;
    l.printer();
    cout<<"\nAfter Delete:1"<<endl;
    l.deleteBypriority();
    l.printer();
    cout<<"\nAfter Delete:2"<<endl;
    l.deleteBypriority();
    l.printer();
    cout<<"\nAfter Delete:3"<<endl;
    l.deleteBypriority();
    l.printer();

    return 0;
}

