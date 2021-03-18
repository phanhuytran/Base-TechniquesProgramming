//Project: BTH04_BT02.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, i = 1, Tich = 1;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	while (n <= 1)
	{
		cout << "Ban da nhap sai ! Vui long nhap lai: ";
		cin >> n;
	}
	do
	{
		Tich *= i;
		i = i + 2;
	} while (i <= n);
	cout << "Tich cac so le tu 1 den " << n << " la: " << Tich << endl;
	return 0;
}