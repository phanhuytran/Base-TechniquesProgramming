//Project: BTH02_Bai5.cpp
#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double p;
	double s;

	cout << "Nhap canh thu 1: ";
	cin >> a;
	cout << "Nhap canh thu 2: ";
	cin >> b;
	cout << "Nhap canh thu 3: ";
	cin >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p-a) * (p-b) * (p-c));
	cout << "Dien tich hinh tam giac la: " << s << endl;

	return 0;
}