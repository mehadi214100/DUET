#include <iostream>
#include <cmath>

using namespace std;


double f(double x, double y) {
    return pow(x, 2) + pow(y, 2);
}

double rungeKutta(double x0, double y0, double h, double x) {
    double k1, k2;
    double y = y0;

    while (x0 < x) {
        k1 = h * f(x0, y);
        k2 = h * f(x0 + h, y + k1);

        y = y + 0.5 * (k1 + k2);
        x0 = x0 + h;
    }

    return y;
}

int main() {
    double x0 = 0, y0 = 0;
    double x = 0.4;
    double h = 0.2;

    cout << "For x = " << x << ", y = " << rungeKutta(x0, y0, h, x) << endl;

    return 0;
}
//write numerical solution for ordinary differential equation using runge kutta 2nd order method c++ for x^2+y^2 equatio
