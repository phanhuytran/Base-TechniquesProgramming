//Project: BTH02_Bai7.cpp
#include <iostream>
using namespace std;

int main()
{
	double x1;
	double y1;
	double x2;
	double y2;
	double d;

	cout << "Nhap toa do thu 1: ";
	cin >> x1 >> y1;
	cout << "Nhap toa do thu 2: ";
	cin >> x2 >> y2;
	d = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "Khoang cach giua hai diem la: " << d << endl;

	return 0;
}