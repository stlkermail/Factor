#include <iostream>

using namespace std;

int Power(int u, int n, int sum);

void main()
{
	setlocale(LC_ALL, "");

	int i = 1, n, u, sum = 1;

	cin >> n >> u;
	cout << "\n";
	cout << Power(u, n, sum);

}

int Power (int u, int n, int sum)
{
	for (int i = 1; i <= u; i++)
	{
		sum *= n;
	}
	return sum;

}


