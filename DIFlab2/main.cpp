#include <iostream>

using namespace std;

double func1(double x, double y)
{
	return y/x;
}

double func2(double x, double y)
{
	return (sqrt((x - 1) / (x + 1)));
}

int main()
{
	double x, y, h;
	int count;

	cout << "enter x0 y0" << endl;
	cin >> x >> y;

	cout << "enter count, h" << endl;
	cin >> count >> h;

	int t = x;
	int d = y;

	cout << "\n" << "f(x,y) = y/x" << "\n" << endl;

	cout << "x[0]=" << x << " ";
	cout << "y[0]=" << y << endl;
	for (int i = 0; i < count; i++)
	{
		y += h * func1(x, y);
		x += h;
		cout << "x[" << i + 1 << "]=" << x << " ";
		cout << "y[" << i + 1 << "]=" << y << endl;
	}

	cout << "\n" << "f(x,y) = ((x-1)/(x+1)) ^ 1/2" << "\n" << endl;

	x = t;
	y = d;
	cout << "x[0]=" << x << " ";
	cout << "y[0]=" << y << endl;
	for (int i = 0; i < count; i++)
	{
		y += h * func2(x, y);
		x += h;
		cout << "x[" << i + 1 << "]=" << x << " ";
		cout << "y[" << i + 1 << "]=" << y << endl;
	}

	return 0;
}