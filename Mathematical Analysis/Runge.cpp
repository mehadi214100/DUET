#include <iostream>
#include <cmath>

// Function to define the differential equation dy/dx = f(x, y)
double f(double x, double y) {
    return 2*y/x;
}

// Fourth-order Runge-Kutta method to solve the differential equation
double rungeKutta(double x0, double y0, double h, double x_target) {
    double k1, k2, k3, k4;
    double x = x0;
    double y = y0;

    while (x < x_target) {
        k1 = h * f(x, y);
        k2 = h * f(x + 0.5*h, y + 0.5*k1);
        k3 = h * f(x + 0.5*h, y + 0.5*k2);
        k4 = h * f(x + h, y + k3);

        y += (k1 + 2*k2 + 2*k3 + k4) / 6.0;
        x += h;
    }

    return y;
}

int main() {
    double x0 = 1; // initial value of x
    double y0 = 2; // initial value of y
    double x_target = 2.0; // target value of x
    double h = 0.25;

    double y_target = rungeKutta(x0, y0, h, x_target);

    std::cout << "The solution of the ODE at x = " << x_target << " is y = " << y_target << std::endl;

    return 0;
}
