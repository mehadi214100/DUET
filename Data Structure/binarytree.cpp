#include<bits/stdc++.h>
using namespace std;

class BinaryTree{
    private:
        vector<int>v;

    public:
        BinaryTree() {};
        void insertData(int data){
            v.push_back(data);
        }

        void preorder(int idx= 0){
            if(v.size()>idx){
                cout<<v[idx]<<" ";
                preorder(2*idx+1);
                preorder(2*idx+2);
            }

        }

        void inorder(int idx= 0){
            if(v.size()>idx){
                inorder(2*idx+1);
                cout<<v[idx]<<" ";
                inorder(2*idx+2);
            }

        }

        void postorder(int idx= 0){
            if(v.size()>idx){
                postorder(2*idx+1);
                postorder(2*idx+2);
                cout<<v[idx]<<" ";
            }

        }

};


int main(){
    BinaryTree obj;
    obj.insertData(40);
    obj.insertData(20);
    obj.insertData(30);
    obj.insertData(4);
    obj.insertData(5);

    cout<<"Pre Order :";
    obj.preorder();
    cout<<endl;

    cout<<"In Order :";
    obj.inorder();
    cout<<endl;

    cout<<"Post Order :";
    obj.postorder();
    cout<<endl;

    return 0;
}
