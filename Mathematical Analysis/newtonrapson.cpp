#include<bits/stdc++.h>
using namespace std;

double func(double x,int c[],int d[],int n){
    double res = 0;
    for(int i=0;i<n;i++){
        res += c[i]*pow(x,d[i]);
    }
    return res;
}

double derifunc(double x,int c[],int d[],int n){
    double res = 0;
    for(int i=0;i<n;i++){
        res += c[i]*d[i]*pow(x,d[i]-1);
    }
    return res;
}

void newtonRaphson(double x,int c[],int d[],int n){
    double h = func(x,c,d,n)/derifunc(x,c,d,n);
    while(abs(h)>=0.0001){
        h = func(x,c,d,n)/derifunc(x,c,d,n);
        x = x-h;
    }
    cout<<"Your result is:"<<x<<endl;
}


int main(){
    int n;
    cout<<"How many terms :";
    cin>>n;
    int coeff[n],deg[n];
    for(int i=0;i<n;i++){
        cout<<"Enter coefficient & degree :";
        int c,d;
        cin>>c>>d;
        coeff[i] = c;
        deg[i] = d;
    }
    int x;
    cout<<"Guess x:";
    cin>>x;
    newtonRaphson(x,coeff,deg,n);
}

