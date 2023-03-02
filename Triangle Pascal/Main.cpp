#include <iostream>
#include <Windows.h>
using namespace std;
using std::cout;
void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = {};
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);
	setlocale(LC_ALL, "");

	int h;
	cout << "Введите высоту треугольника: "; cin >> h;
	long long int nf = 1;
	for (int i = 0; i < h; i++)
	{
		cout.width(4);
		cout << "";
	}
	cout << " ";
	cout << left;
	//cout.width(11);
	cout << "" << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		for (int i = n % 2 ? 1 : 0; i < h - n; i++)
		{
			cout.width(4);
			cout << "";
		}
		if (n % 2 && n != h)
		{
			cout.width(4);
			cout << "";
		}
		cout << " ";
		cout << left;
		cout.width(8);
		cout << 1;
		nf *= n;
		long long int kf = 1;
		for (int k = 1; k <= n; k++)
		{
			kf *= k;
			long long int nkf = 1;
			for (int i = 1; i <= n - k; i++)
			{
				nkf *= i;
			}
			cout.width(8);
			cout << nf / kf / nkf;
		}
		cout << "\n";
	}
}