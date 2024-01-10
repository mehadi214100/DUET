#include<bits/stdc++.h>
using namespace std;

int arr[100];
int n,upper = 0;

void create(){
    cout<<"Enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        upper++;
    }
}

void display(){
    cout<<"Array elements :";
    for (int i=0;i<upper;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int found(int x){
    for(int i=0;i<upper;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

void insertData(int data){
    arr[upper] = data;
    upper++;
}

void insertBypositiondata(int data,int pos){
    if(pos>upper){
        insertData(data);
    }else{
        int i = n-1;
        for(i;i>=pos-1;i--){
            arr[i+1] = arr[i];
        }
        upper++;
        arr[++i] = data;
    }
    n = n+1;
}


void deleteData(int data){
    int idx = found(data);
    if(idx==-1) cout<<"Data not found !!"<<endl;
    else{
        if(idx==upper-1){
            upper--;
        }else{
            for(int i=idx;i<upper;i++){
                arr[i] = arr[i+1];
            }
            upper--;
        }

    }
}

int sizeofarray(){
    return upper;
}

int main(){
    create();
    display();
    insertBypositiondata(25,10);
    display();
    deleteData(25);
    display();
    deleteData(2);
    display();

}
