//Project: BTH02_BT09.cpp
#include <iostream>
using namespace std;

int tinhluyThua(int cs, int soMu)
{
	if (soMu == 0) return 1;
	return cs * tinhluyThua(cs, soMu - 1);
}
int chuyenDoiHeDem(int n, int soMu)
{
	if (n == 0) return 0;
	return (n % 10) * tinhluyThua(2, soMu) + chuyenDoiHeDem(n / 10, soMu + 1);
}
int main()
{
	system("color 0a");
	int n, soMu = 0;
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai!\n";
	} while (n <= 0);
	cout << "He thap phan tuong ung cua " << n << " la: " << chuyenDoiHeDem(n, soMu) << endl;;
	return 0;
}