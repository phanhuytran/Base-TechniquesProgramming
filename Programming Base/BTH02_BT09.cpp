//Project: BTH02_Bai9.cpp
#include <iostream>
using namespace std;

int main()
{
	int tongSoSach;
	double tongSoTien;
	double tienVanChuyen;
	double tong;
	double thue;

	cout << "Nhap tong so sach: ";
	cin >> tongSoSach;
	cout << "Nhap tong so tien: ";
	cin >> tongSoTien;
	thue = 0.075 * tongSoTien;
	tienVanChuyen = 2000 * tongSoSach;
	tong = tongSoTien + thue + tienVanChuyen;
	cout << "Tien thue la: " << thue << endl;
	cout << "Tien van chuyen la: " << tienVanChuyen << endl;
	cout << "Tong gia tri cua don hang: " << tong << endl;

	return 0;
}