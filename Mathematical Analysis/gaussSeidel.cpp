
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"How many terms :";
    cin>>n;
    int arr[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    double x1=0,x2=0,x3=0;
    double res ;
    int ct = 0;
    while(true){
        x1 = (arr[0][n]-(arr[0][1]*x2)-(arr[0][2]*x3))/arr[0][0];
        x2 = (arr[1][n]-(arr[1][0]*x1)-(arr[1][2]*x3))/arr[1][1];
        x3 = (arr[2][n]-(arr[2][0]*x1)-(arr[2][1]*x2))/arr[2][2];
        ct++;
        res = (arr[0][0]*x1+(arr[0][1]*x2)+(arr[0][2]*x3));
        if(fabs(res-arr[0][n])<0.001){
            cout<<"Res :"<<x1<<" "<<x2<<" "<<x3<<endl;
            cout<<"Total number of iteration : "<<ct<<endl;
            break;
        }

    }

    return 0;
}
/*
3
2 1 1 5
3 5 2 15
2 1 4 8
*/
