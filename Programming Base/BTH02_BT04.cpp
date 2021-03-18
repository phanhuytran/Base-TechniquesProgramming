//Project: BTH02_Bai4.cpp
#include <iostream>
using namespace std;

int main()
{
	const double pi = 3.141593;
	double r;
	double chuViHT;
	double dienTichHT;

	cout << "Nhap ban kinh hinh tron: ";
	cin >> r;
	chuViHT = 2 * pi * r;
	dienTichHT = pi * r * r;
	cout << "Chu vinh hinh tron la: " << chuViHT << endl;
	cout << "Dien tich hinh tron la: " << dienTichHT << endl;

	system("pause");
	return 0;
}