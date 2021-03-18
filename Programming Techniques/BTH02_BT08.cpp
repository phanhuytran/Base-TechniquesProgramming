//Project: BTH02_BT08.cpp
#include <iostream>
using namespace std;

int chuyenDoiHeDem(int n)
{
	if (n == 0) return 0; else
		return chuyenDoiHeDem(n / 2) * 10 + n % 2;
}
int main()
{
	system("color 0a");
	int n;
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai!\n";
	} while (n <= 0);
	cout << "He nhi phan tuong ung cua " << n << " la: " << chuyenDoiHeDem(n) << endl;;
	return 0;
}