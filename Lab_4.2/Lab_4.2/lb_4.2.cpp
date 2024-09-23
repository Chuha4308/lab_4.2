#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y,result;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{

		A = 2 * x - 13.5;
		if (x < -1)
			B = (sin(x)) / (1 + (cos(x) * cos(x)));
		else
			if (-1 <= x && x <= 1)
				B = cos(((sin(x) * sin(x)) - 1) * cos((sin(x) * sin(x)) - 1));
			else
				(x > 1);
		{
			result = log10(x + 0.4);
			B = result;
		}

		y = A - B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}