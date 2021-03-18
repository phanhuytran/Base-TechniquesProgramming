//Project: BTH06_BT11.cpp
#include <iostream>
using namespace std;

bool kTSoDX(int n)
{
	int cs, daoNguoc = 0, tam;
	tam = n;
	while (tam != 0)
	{
		cs = tam % 10;
		daoNguoc = daoNguoc * 10 + cs;
		tam /= 10;
	}
	if (daoNguoc == n)
		return true;
	return false;
}
int main()
{
	system("color 0a");
	int x;
	cout << "Nhap vao so nguyen n: ";
	cin >> x;
	bool kT = kTSoDX(x);
	if (kT == true)
		cout << "Ket qua: " << x << " la so doi xung\n";
	else
		cout << "Ket qua: " << x << " khong phai la so doi xung\n";
	return 0;
}