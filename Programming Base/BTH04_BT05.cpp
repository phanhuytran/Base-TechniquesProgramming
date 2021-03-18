//Project: BTH04_BT05.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, tam = 0, soDN = 0;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "Ban da nhap sai! Vui long hap lai: ";
		cin >> n;
	}
	tam = n;
	while (tam > 0)
	{
		int t = tam % 10;
		soDN = soDN * 10 + t;
		tam /= 10;
	}
	cout << "So dao nguoc cua " << n << " la: " << soDN << endl;
	return 0;
}