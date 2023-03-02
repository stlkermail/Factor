#include <iostream>
using namespace std;

int Power(int u, int n, int result);

void main()
{
	setlocale(LC_ALL, "");
	int n, u, result = 1;
	cout << "Введите Основание степени, затем показатель степени: ";
	cin >> n >> u;
	cout << "\n";
	cout << Power(u, n, result);
}

int Power (int u, int n, int result)
{
	for (int i = 1; i <= u; i++)
	{
		result *= n;
	}
	return result;
}


