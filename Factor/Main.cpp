#include <iostream>

using namespace std;

int Factorial(int n, int pr);

void main()
{
	setlocale(LC_ALL, "");
	int n, pr = 1;
	cout << "¬ведите факториал числа: ";
	cin >> n;
	cout << Factorial(n, pr) << endl;
}


int Factorial(int n, int pr)
{
	pr = 1;
	for (int i = 1; i < n + 1; i++)
	{
		cout << i << " ";
		pr *= i;
	}
	cout << "\n";
	return pr;
}