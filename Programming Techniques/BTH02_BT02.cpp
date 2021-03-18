//Project: BTH02_BT02.cpp
#include <iostream>
using namespace std;

int tinhGiaiThua(int n)
{
	if (n == 0 || n == 1) return 1;
	return n * tinhGiaiThua(n - 1);
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
	cout << "Ket qua: " << n << "! = " << tinhGiaiThua(n) << endl;
	return 0;
}