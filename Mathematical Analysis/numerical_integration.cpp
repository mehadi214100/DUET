#include<bits/stdc++.h>
using namespace std;
double co[100],po[100];
double f(int n,double x){
    double sum =0;
    for(int i=1; i<=n; i++){
        sum+=co[i]*pow(x,po[i]);
    }
    return sum;
}

int main(){
    int n,u,l;
    cout<<"Enter number of term: ";
    //freopen("in.txt", "r", stdin);
    cin>>n;
    cout<<"Upper limit: ";
    cin>>u;
    cout<<"Lower limit: ";
    cin>>l;
    for(int i=1; i<n+1; i++){
        cin>> co[i]>>po[i];
    }
    double sum= (u-l)*(f(n,u)+f(n,l))/2;
    cout<<"Result is= "<<sum<<endl;
    return 0;
}
