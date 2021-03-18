//Project: BTH06_BT04.cpp
#include <iostream>
using namespace std;

int tinhTong(int n)
{
	int tong = 0;
	for (int i = 0; i <= n; i++)
		tong += i;
	return tong;
}
int tinhGiaThua(int n)
{
	int tich = 1;
	for (int i = 1; i <= n; i++)
		tich *= i;
	return tich;
}
int main()
{
	system("color 0a");
	int a;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> a;
	cout << "\n";
	if (a <= 0)
		cout << "Ban da nhap sai!" << endl;
	else
	{
		cout << "a. Tong cac so tu 1 den " << a << " la " << tinhTong(a) << "\n\n";
		cout << "b. " << a << "! = " << tinhGiaThua(a) << "\n\n";
	}
	return 0;
}