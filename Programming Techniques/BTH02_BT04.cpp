//Project: BTH02_BT04.cpp
#include <iostream>
using namespace std;

double tinhLuyThua(int x, int n)
{
	if (x == 0) return 0; else
		if (n == 0) return 1; else
			if (n > 0) return x * tinhLuyThua(x, n - 1); else
				return 1.0 / x * tinhLuyThua(x, n + 1);
}
int main()
{
	system("color 0a");
	int x, n;
	cout << "Nhap vao so nguyen x: "; cin >> x;
	cout << "Nhap vao so mu n: "; cin >> n;
	cout << "Ket qua: " << x << "^" << n << " = " << tinhLuyThua(x, n) << endl;
	return 0;
}