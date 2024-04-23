#include <bits/stdc++.h>
using namespace std;

double backwardDifference(double (*f)(double), double x, double h) {
    return (f(x) - f(x - h)) / h;
}

// Example function to differentiate: f(x) = x^2
double exampleFunction(double x) {
    return x * x;
}

int main() {
    double x = 1.0; // Point at which to find the derivative

    // Array of step sizes
    double h_values[] = {0.2, 0.1, 0.05, 0.01};

    //
    cout << "h" << "\t"<< "f(1)" << "\t" << "Error" <<endl;

    // Calculate and output the results for each h value
    for (double h : h_values) {
        double derivative = backwardDifference(exampleFunction, x, h);
        cout << h << "\t" << derivative << "\t" << 2-derivative << endl;
    }

    return 0;
}
