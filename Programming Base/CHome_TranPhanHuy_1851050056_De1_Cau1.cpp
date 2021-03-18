//CHome_TranPhanHuy_1851050056_De1TKCK_Cau01.cpp
#include <iostream>
using namespace std;

int tinhGiaiThua(int n)
{
	int tich = 1;
	for (int i = 1; i <= n; i++)
		tich *= i;
	return tich;
}
bool kTBoiSoCua5(int n)
{
	if (n % 5 == 0)
		return true;
	return false;
}
int main()
{
	system("color 0a");
	int x;
	do{
		cout << "Nhap so nguyen duong tu 1 den 100: ";
		cin >> x;
		if (x >= 1 && x <= 100)
			break;
		cout << "Nhap sai. Hay nhap lai!\n";
	} while (x < 1 || x > 100);
	cout << x << "! = " << tinhGiaiThua(x) << endl;
	bool kT = kTBoiSoCua5(x);
	if (kT)
		cout << x << " la boi so cua 5\n";
	else
		cout << x << " khong phai la boi so cua 5\n";
	return 0;
}