#include<bits/stdc++.h>
using namespace std;

class Arr{
    private:
        int n;
        int arr[100];

    public:
        void getinput();
        void display();
        void mean();
        void smallNumber();
        void secondLarge();
        void digitForm();
        void duplicate();
};
void Arr::getinput(){
    cout<<"Enter hoy many element :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void Arr::display(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Arr::mean(){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    double res = (sum*1.0)/n;
    cout<<"Mean value :"<<res<<endl;
}

void Arr::smallNumber(){
    int pos = 0;
    int item = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<item){
            pos = i;
            item = arr[i];
        }
    }
    cout<<"Small number at "<<pos<<endl;

}

void Arr::duplicate(){
    int newarr[100];

    int pos = 1;
    newarr[0] = arr[0];
    bool ok = true;
    for(int i=1;i<n;i++){
        int data = arr[i];
        bool check = true;
        for(int j=0;j<pos;j++){
            if(arr[j]==data){
                cout<<"Duplicate found !";
                check = false;
                break;
            }
        }
        if(check){
            newarr[pos] = arr[i];
            pos++;
        }else{
            ok = false;
            break;
        }
    }
    if(ok) cout<<"No data duplicate !!!"<<endl;


}

void Arr::secondLarge(){
    int large = arr[0];
    int second = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>large){
            second = large;
            large = arr[i];
        }else if(arr[i]>second){
            second = arr[i];
        }
    }
    cout<<"Second large :"<<second<<endl;

}

void Arr::digitForm(){
    int digit = 0;
    for(int i = 0;i<n;i++){
        digit = (digit*10)+arr[i];
    }
    cout<<"Digit :"<<digit<<endl;

}
int main(){
    Arr a;
    a.getinput();
    a.display();
    a.mean();
    a.smallNumber();
    a.secondLarge();
    a.digitForm();
    a.duplicate();
}
