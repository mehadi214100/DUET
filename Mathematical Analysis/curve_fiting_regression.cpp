#include <bits/stdc++.h>
using namespace std;

int main (){
    ifstream myfile;
    myfile.open("file.txt");
    string myline;
    if ( myfile.is_open() ) {

        int n=0, sumX=0,sumY=0,sumXY=0,sumXsq=0;

        while ( myfile ) {
            getline (myfile, myline);
            string s1 ="",s2="";
            int i=0;
            while(myline[i]!=' '){
                s1+= myline[i];
                i++;
            }
            i++;
            while(i<myline.size()){
                s2+= myline[i];
                i++;
            }
            if(s1=="" || s2==""){
                break;
            }

            int x = stoi(s1);
            int y = stoi(s2);

            n +=1;
            sumX +=x;
            sumY +=y;
            sumXY+=(x*y);
            sumXsq+=(x*x);
        }
        cout<<n<<" "<<sumX<<" "<<sumY<<" "<<sumXY<<" "<<sumXsq<<endl;
        double res = (((n*sumXY)-(sumX)*(sumY))*1.0)/((n*sumXsq)-(sumX*sumX));
        cout<<res<<endl;
    }else {
        cout << "Could not open file\n";
    }
return 0;      }
