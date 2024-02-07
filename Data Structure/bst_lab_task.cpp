#include<iostream>
using namespace std;

class BST
{
    struct node
    {
        int data;
        node* left;
        node* right;
    };
    public:
    node* root;

    //Inserting an item in BST
    node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

    //Searching an item in BST
    node* search(node* t, int x)
    {
        if(t == NULL || t->data == x)
            return t;
        if(t->data < x)
            return search(t->right,x);
        else
            return search(t->left,x);
    }

    node* findMin(node* t)
    {
        if(t ->left==NULL){
            return t;
        }
        return findMin(t->left);

    }

    node* remove(int x, node* t)
    {
            node* temp;
            if(t==NULL){
                return NULL;
            }else if(x<t->data){
                t->left = remove (x,t->left);
            }else if(x>t->data){
                t->right = remove (x,t->right);
            }else if(t->left && t->right){
                temp = findMin(t->right);
                t->data = temp->data;
                t->right = remove(t->data,t->right);
            }else{
                temp = t;
                if(t->left==NULL){
                    t = t->right;
                }else if(t->right==NULL){
                    t= t->left;
                }
                delete temp;
            }
            return t;

    }

    void inorder(node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }




public:
    BST()
    {
        root = NULL;
    }

    void insert(int x)
    {
        root = insert(x, root);
    }

    void remove(int x)
    {
        root = remove(x,root);
    }

    void display()
    {
        inorder(root);
        cout << endl;
    }

    void search(int x)
    {
        root = search(root, x);
        if (root)
            cout<<"Key found\n";
        else
            cout<<"Key not found\n";
    }

};

int main()
{
    BST tree;
    //tree.insert(20);
    cout<<"Enter the number of nodes to be inserted in the tree:";
    int n;
    cin>>n;
    cout<<"Enter items\n";
    while(n--)
    {
        int data;
        cin>>data;
        tree.insert(data);
    }
    cout<<"Display items: ";
    tree.display();


    int key;
    //tree.remove(25);
    cout<<"Item/key to be erased:   ";
    cin>>key;
    tree.remove(key);
    tree.display();

    return 0;
}

