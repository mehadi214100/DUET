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
    // Mehadi Hasan
    double x;
    cout<<"Enter x: ";cin>>x;
    double x1,x2,fx1,fx2;
    for(int i=1;i<n;i++){
        if(xArr[i]>x){
            x1 = xArr[i-1];
            x2 = xArr[i];
            fx1 = yArr[i-1];
            fx2 = yArr[i];
            break;
        }
    }

    double ans = fx1+(x-x1)*((fx2-fx1)/(x2-x1));
    cout<<"Res : "<<ans<<endl;

}
/*
5
1 1
2 1.4142
3 1.7321
4 2
5 2.2361
*/
