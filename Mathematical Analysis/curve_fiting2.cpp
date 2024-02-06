#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"How many element : ";
    cin>>n;
    double xArr[n];
    double yArr[n];
    for(int i=0;i<n;i++){
        cin>>xArr[i]>>yArr[i];
    }
    double x;
    cout<<"Enter x: ";cin>>x;
    double x0,x1,x2,fx0,fx1,fx2;
    for(int i=1;i<n-1;i++){
        if(xArr[i]>x){
            x0 = xArr[i-1];
            x1 = xArr[i];
            x2 = xArr[i+1];
            fx0 = yArr[i-1];
            fx1 = yArr[i];
            fx2 = yArr[i+1];
            break;
        }
    }
    double l0 = ((x-x1)*(x-x2))/((x0-x1)*(x0-x2));
    double l1 = ((x-x2)*(x-x0))/((x1-x2)*(x1-x0));
    double l2 = ((x-x0)*(x-x1))/((x2-x1)*(x2-x0));

    double ans = (fx0*l0)+(fx1*l1)+(fx2*l2);

    cout<<"Res : "<<setprecision(5)<<ans<<endl;

}
/*
5
1 1
2 1.4142
3 1.7321
4 2
5 2.2361
*/

