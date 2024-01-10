#include<bits/stdc++.h>
using namespace std;

class BinaryTree{
    private:
        vector<string>v;

    public:
        BinaryTree() {};
        void insertData(string data){
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

        bool isoperator(string s){
            return s=="+"|| s=="-"|| s=="*" || s=="/";
        }

        double evaluate(int idx=0){
            if(idx<v.size() && v[idx]!=""){
                if(isoperator(v[idx])){
                    double left = evaluate(idx*2+1);
                    double right = evaluate(idx*2+2);

                    if(v[idx]=="+"){
                        return left+right;
                    }else if(v[idx]=="-"){
                        return left-right;
                    }else if(v[idx]=="*"){
                        return left*right;
                    }else if(v[idx]=="/"){
                        if(right!=0){
                            return left/right;
                        }else{
                            cout<<"Error: Divide zero"<<endl;
                            return NAN;
                        }
                    }
                }else {
                    return stod(v[idx]);
                }
            }
        }

};


int main(){
    BinaryTree obj;
    obj.insertData("-");
    obj.insertData("*");
    obj.insertData("/");
    obj.insertData("+");
    obj.insertData("3");
    obj.insertData("10");
    obj.insertData("5");
    obj.insertData("5");
    obj.insertData("4");


    cout<<"Pre Order :";
    obj.preorder();
    cout<<endl;

    cout<<"In Order :";
    obj.inorder();
    cout<<endl;

    cout<<"Post Order :";
    obj.postorder();
    cout<<endl;
    cout<<"Result :";
    cout<<obj.evaluate();
    cout<<endl;
    return 0;
}
