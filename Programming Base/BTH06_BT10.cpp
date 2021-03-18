//Project: BTH06_BT10.cpp
#include <iostream>
using namespace std;

bool kTSoHT(int n)
{
	int tong = 0;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			tong += i;
	if (tong == n)
		return true;
	return false;
}
int main()
{
	system("color 0a");
	int x;
	cout << "Nhap vao so nguyen n: ";
	cin >> x;
	bool kT = kTSoHT(x);
	if (kT == true)
		cout << "Ket qua: " << x << " la so hoan thien\n";
	else
		cout << "Ket qua: " << x << " khong phai la so hoan thien\n";
	return 0;
}