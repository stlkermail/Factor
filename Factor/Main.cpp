#include <iostream>

using namespace std;

int Factorial(int n, int res);

void main()
{
	setlocale(LC_ALL, "");
	int n, res = 1;
	cout << "Введите факториал числа: ";
	cin >> n;
	cout << Factorial(n, res) << endl;
}

int Factorial(int n, int res)
{
	res = 1;
	for (int i = 1; i < n + 1; i++)
	{
		cout << i << " ";
		res *= i;
	}
	cout << "\n";
	return res;
}