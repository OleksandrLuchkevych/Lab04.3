#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "-------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << " |"
		<< setw(7) << "F" << setw(7) << " |" << endl;
	cout << "-------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		
		if (x + c < 0 && a != 0)
			F = (-1) * (a * x * x) - b;
		else
			if (x + c > 0 && a == 0)
				F = (x - a) / (x - c);
			else
				F = x / c + c / x;

		cout << "|" << setw(7) << setprecision(2) << x << setw(3)
			<< " |" << setw(8) << setprecision(2) << F << setw(6)
			<< " |" << endl;
		x += dx;
	}

	cout << "-------------------------" << endl;

	return 0;

}