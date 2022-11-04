#include <iostream>

using namespace std;

double f(int const n)
{
	
	if (n == 0)
		return 0;
	else

		return 1+f(n&(n-1));

}

/*double binary(int n, int a)
{
	if (n != 0)
	{
		if (n % 2 == 0)
		{
			return binary(n / 2, a);
		}
		else
		{
			return binary(n / 2, ++a);
		}
	}
	else
		return a;
	

*/
//}
int main()
{
	int n;
	int level = 0;
	cout << "enter n = "; cin >> n;

	//cout << "how many number '1' in the binary number system " << binary(n, level) << endl;
	cout << "depth of a recursive = " << f(n) << endl;
	
}