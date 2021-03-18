//Project: BTH02_BT07.cpp
#include <iostream>
using namespace std;

int tinhTongCSChan(int n)
{
	if (n == 0) return 0; else
		if (n % 2 == 0) return n % 10 + tinhTongCSChan(n / 10); else
			return tinhTongCSChan(n / 10);
}
int tinhTongCSLe(int n)
{
	if (n == 0) return 0; else
		if (n % 2 != 0) return n % 10 + tinhTongCSLe(n / 10); else
			return tinhTongCSLe(n / 10);
}
int main()
{
	system("color 0a");
	int n;
	do {
		cout << "Nhap vao so nguyen n: "; cin >> n;
		if (n <= 0)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (n <= 0);
	cout << "Ket qua: Tong chu so chan cua " << n << " la: " << tinhTongCSChan(n) << endl;
	cout << "Ket qua: Tong chu so le cua " << n << " la: " << tinhTongCSLe(n) << endl;
	return 0;
}