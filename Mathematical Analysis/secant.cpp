#include<bits/stdc++.h>
using namespace std;

double func(double x,int c[],int d[],int n){
    double res = 0;
    for(int i=0;i<n;i++){
        res += c[i]*pow(x,d[i]);
    }
    return res;
}



void secant(double x1,double x2,int c[],int d[],int n){
    double x = (x2*func(x1,c,d,n)-x1*func(x2,c,d,n))/(func(x1,c,d,n)-func(x2,c,d,n));
    double h = func(x,c,d,n);
    while(abs(h)>=0.0001){
        x = (x2*func(x1,c,d,n)-x1*func(x2,c,d,n))/(func(x1,c,d,n)-func(x2,c,d,n));
        x1 = x2;
        x2 = x;
        h = func(x,c,d,n);
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
    int x1,x2;
    cout<<"Guess x1 and x2:";
    cin>>x1>>x2;
    secant(x1,x2,coeff,deg,n);
}


