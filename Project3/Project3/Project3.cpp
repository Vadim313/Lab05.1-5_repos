#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double s(const double x);

int main()
{
	double tp, tk, z;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double tg = (tk - tp) / n;
	double t = tp;
	cout << "--------------------" << endl;
	cout << "|" << setw(5) << "t" << " |"
		<< setw(5) << "z" << " |"
		<< endl;
	cout << "--------------------" << endl;
	while (t <= tk)
	{
		z = s(2*t+1)+2*s(pow(t,2))+sqrt(s(1));
		cout << "|" << setw(5) << setprecision(2) << t << " |"
			<< setw(5) << z << " |"
			<< endl;
		t += tg;
	}
	cout << "--------------------" << endl;
	return 0;
}

double s(const double x)
{
	if (abs(x) >= 1 || x == 0)
		return (cos(1. * x) * cos(1. * x) + 1) / exp(x);
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		double c = 1 / (sin(2 * x));
		S = a;
		do
		{
			k++;
			double R = (pow(2,2*k+1)*pow(x,2*k+1))/ (2 * k + 1);
			a *= R;
			S += c * a;
		} while (k < 4);
		return S;
	}
}