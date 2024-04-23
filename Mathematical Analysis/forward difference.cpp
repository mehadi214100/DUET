#include <bits/stdc++.h>
using namespace std;

double forwardDifference(double (*f)(double), double x, double h) {
    return (f(x + h) - f(x)) / h;
}

// Example function to differentiate: f(x) = x^2
double exampleFunction(double x) {
    return x * x;
}

int main() {
    double x = 1.0;

    double h_values[] = {0.2, 0.1, 0.05, 0.01};


    cout  << "h"  <<"\t"<< "f(1)"<<"\t"<< "Error" << endl;


    for (double h : h_values) {
        double derivative = forwardDifference(exampleFunction, x, h);
        cout<< h <<"\t" << derivative<<"\t"<< derivative-2 << endl;
    }

    return 0;
}
