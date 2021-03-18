//Project: BTH05_BT08.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, tong = 0;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 1; n >= i; i = i + 2)
			tong += i;
		cout << "Tong ca so le tu 1 den " << n << " la: " << tong << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}