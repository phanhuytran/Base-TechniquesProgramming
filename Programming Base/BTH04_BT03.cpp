//Project: BTH04_BT03.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, i = 0, tongChan = 0, tongLe = 0;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	while (n <= 1)
	{
		cout << "Ban da nhap sai! Vui long nhap lai: ";
		cin >> n;
	}
	do
	{
		if (i % 2 == 0)
		{
			tongChan += i;
			i++;
		}
		else
		{
			tongLe += i;
			i++;
		}
	} while (i <= n);
	cout << "Tong cac so chan tu 1 den " << n << " la: " << tongChan << endl;
	cout << "Tong cac so le tu 1 den " << n << " la: " << tongLe << endl;
	return 0;
}