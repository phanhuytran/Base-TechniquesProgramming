//Project: BTH06_BT01.cpp
#include <iostream>
using namespace std;

double tinhDienTichHCN(double cd, double cr)
{
	double dt;
	dt = cd * cr;
	return dt;
}
double tinhChuViHCN(double cd, double cr)
{
	double cv;
	cv = (cd + cr) * 2;
	return cv;
}
int main()
{
	double d, r;
	cout << "Nhap vao chieu dai hinh chu nhat: ";
	cin >> d;
	cout << "Nhap vao chieu rong hinh chu nhat: ";
	cin >> r;
	if (d > r)
	{
		cout << "Dien tich hinh chu nhat la: " << tinhDienTichHCN(d, r) << endl;
		cout << "Dien chu vi hinh chu nhat la: " << tinhChuViHCN(d, r) << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}
