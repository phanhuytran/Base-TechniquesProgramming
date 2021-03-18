//Project: BTH06_BT06.cpp
#include <iostream>
using namespace std;

int tinhSoDaoNguoc(int n)
{
	int cs, t = 0, soDN = 0;
	while (n > 0)
	{
		cs = n % 10;
		soDN = soDN * 10 + cs;
		n /= 10;
	}
	return soDN;
}
int main()
{
	int x;
	system("color 0a");
	cout << "Nhap vao so nguyen duong n: ";
	cin >> x;
	if (x > 0)
		cout << "So dao nguoc cua " << x << " la: " << tinhSoDaoNguoc(x) << endl;
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}