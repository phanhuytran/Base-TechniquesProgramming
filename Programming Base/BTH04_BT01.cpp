//Project: BTH04_BT01.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, i = 0, Tong = 0;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (n > 0)
	{
		do
		{
			Tong += i;
			i++;
		} while (i <= n);
		cout << "Tong tu cac so nguyen tu 1 den " << n << " la: " << Tong << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}