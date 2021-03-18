//Project: BTH4_BT12.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n, soDN = 0, tam = 0;
	cout << "Nhap 1 so nguyen: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "n = " << n << " khong thoa man! Vui long nhap lai: ";
		cin >> n;
	}
	tam = n;
	while (tam > 0)
	{
		int t = tam % 10;
		soDN = soDN * 10 + t;
		tam /= 10;
	}
	cout << "n = " << n << " thi ket qua tach tung chu so la: ";
	while (soDN > 0)
	{
		int c = soDN % 10;
		soDN /= 10;
		cout << c << " ";
	}
	cout << endl;
	return 0;
}