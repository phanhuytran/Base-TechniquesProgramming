//Project: BTH02_Bai3.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ten;
	double soNLV;
	double tienC1N;
	double luong;

	cout << "Nhap ho va ten: ";
	getline(cin, ten);
	cout << "Nhap so ngay lam viec: ";
	cin >> soNLV;
	cout << "Nhap tien cong 1 ngay: ";
	cin >> tienC1N;
	luong = tienC1N * soNLV;
	cout << "Tien luong la: " << luong << endl;

	return 0;
}