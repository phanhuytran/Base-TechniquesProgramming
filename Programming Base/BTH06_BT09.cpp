//Project: BTH06_BT09.cpp
#include <iostream>
using namespace std;

int tinhTongCS(int n)
{
	int cs = 0, tong = 0;
	while (n > 0)
	{
		cs = n % 10;
		tong += cs;
		n /= 10;
	}
	return tong;
}
int main()
{
	system("color 0a");
	int x;
	cout << "Nhap vao so nguyen n: ";
	cin >> x;
	if (x > 0)
		cout << "Tong cac chu so cua " << x << " la: " << tinhTongCS(x) << endl;
	else
		cout << "Ban da nhap sai!\n";
	return 0;
}