#include <bits/stdc++.h>
using namespace std;

double func(int a,int b,int c,double x){
    return ((a*(x*x)+b*x+c)*1.0);
}
bool isvalid(double value){
    return(fabs(value)<0.00001);
}

bool bisection(int a,int b,int c,double x1,double x2){

    int i = 0;
    while ((x2-x1)>1e-15)
    {
        i++;
        double x0 = (x1+x2)/2;
        double fx0 = func(a,b,c,x0);
        if(isvalid(fx0)){
            cout<<"Root is "<<x0<<" "<<i<<endl;
            return true;
        }else if(func(a,b,c,x1)*fx0 <0){
            x2 = x0;
        }else{
            x1 = x0;
        }
    }
    
    cout<<"Root not possible try again !"<<endl;
    return false;

}

int main() {
    int a,b,c;
    cout<<"Enter a b & c : ";
    cin>>a>>b>>c;

    double Xmax = sqrt((b*1.0/a)*(b*1.0/a)-2*(c*1.0)/a);
    double xmx = Xmax*-1;
    double xmn= Xmax;

    while (true)
    {
        double x1,x2;
        cout<<"Given x1 and x2 between "<<xmx<<" "<<xmn<<" : ";
        cin>>x1>>x2;
        if(func(a,b,c,x1)*func(a,b,c,x2)>0){
            cout<<"Root not possible try again"<<endl;
            
        }else{
            bool ans = bisection(a,b,c,x1,x2);
            if(ans) break;
        }
    }
    
    
    return 0;
}