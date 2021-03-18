//Project: BTH06_BT03.cpp
#include <iostream>
using namespace std;

double tinhLuyThua(double x, int y)
{
	double luyThua = 1;
	if (y >= 0)
		for (int i = 1; i <= y; i++)
			luyThua *= x;
	else
		for (int i = 1; i <= -y; i++)
			luyThua /= x;
	return luyThua;
}
int main()
{
	system("color 0a");
	int a, b;
	cout << "Nhap x: ";
	cin >> a;
	cout << "Nhap y: ";
	cin >> b;
	cout << "Ket qua: " << a << "^" << b << " = " << tinhLuyThua(a, b) << endl;
	return 0;
}