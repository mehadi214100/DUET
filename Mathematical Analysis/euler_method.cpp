#include <iostream>
using namespace std;



double func(double x, double y)
{
	return (3*x*x+1);
}

void euler(double x0, double y, double h, double x)
{

	while (x0 < x) {
		double temp = y;
		y = y + h * func(x0, y);
		x0 = x0 + h;
	}

	cout << "Approximate solution at x = "
		<< x << " is " << y << endl;
}

int main()
{

	freopen("input.txt","r",stdin);
	double x,y,h;
	cin>>x>>y>>h;
    int X;cin>>X; // kar jonno ber korbo tar man

	euler(x, y, h, X);



	return 0;
}
/*
1 2 0.5
2
**
