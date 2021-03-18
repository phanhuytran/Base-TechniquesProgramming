//Project: BTH05_BT01.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, tong = 0;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 0; i <= n; i++)
			tong = tong + i;
		cout << "Tong tu 1 den " << n << " la: " << tong << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}