//Project: BTH05_BT02.cpp
#include <iostream>
using namespace std;

struct PhanSo
{
	int tuso;
	int mauso;
};
void nhapPhanSo(PhanSo &a)
{
	cout << "+ Nhap tu so: "; cin >> a.tuso;
	do {
		cout << "+ Nhap mau so: "; cin >> a.mauso;
		if (a.mauso == 0)
			cout << "Ban da nhap sai mau so. Vui long nhap lai!\n";
	} while (a.mauso == 0);
}
void xuatPhanSo(PhanSo a)
{
	if (a.tuso > 0 && a.mauso < 0 || a.tuso < 0 && a.mauso < 0)
	{
		a.tuso = - a.tuso;
		a.mauso = - a.mauso;
	}
	if (a.tuso == 0)
		cout << 0;
	else
		if (a.mauso == 1)
			cout << a.tuso;
		else
			cout << a.tuso << "/" << a.mauso;
}
PhanSo tinhTong2PhanSo(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
	kq.mauso = a.mauso * b.mauso;
	return kq;
}
PhanSo tinhHieu2PhanSo(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tuso = a.tuso * b.mauso - b.tuso * a.mauso;
	kq.mauso = a.mauso * b.mauso;
	return kq;
}
PhanSo tinhTich2PhanSo(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tuso = a.tuso * b.tuso;
	kq.mauso = a.mauso * b.mauso;
	return kq;
}
PhanSo tinhThuong2PhanSo(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tuso = a.tuso * b.mauso;
	kq.mauso = a.mauso * b.tuso;
	return kq;
}
int timUCLN(int a, int b)
{
	if (b == 0)
		return a;
	return timUCLN(b, a % b);
}
void rutGonPhanSo(PhanSo &a)
{
	int uc = timUCLN(a.tuso, a.mauso);
	a.tuso /= uc;
	a.mauso /= uc;
}
int main()
{
	system("color 0a");
	PhanSo a, b, c;
	cout << "Nhap phan so thu nhat:\n"; nhapPhanSo(a);
	cout << "Nhap phan so thu hai:\n"; nhapPhanSo(b);
	cout << "-------- RESULTS --------\n";
	cout << "Tong hai phan so da nhap la: ";
	xuatPhanSo(a); cout << " + "; xuatPhanSo(b); cout << " = ";
	c = tinhTong2PhanSo(a, b); rutGonPhanSo(c); xuatPhanSo(c);
	cout << "\nHieu hai phan so da nhap la: ";
	xuatPhanSo(a); cout << " - "; xuatPhanSo(b); cout << " = ";
	c = tinhHieu2PhanSo(a, b); rutGonPhanSo(c); xuatPhanSo(c);
	cout << "\nTich hai phan so da nhap la: ";
	xuatPhanSo(a); cout << " x "; xuatPhanSo(b); cout << " = ";
	c = tinhTich2PhanSo(a, b); rutGonPhanSo(c); xuatPhanSo(c);
	cout << "\nThuong hai phan so da nhap la: ";
	xuatPhanSo(a); cout << " : "; xuatPhanSo(b); cout << " = ";
	c = tinhThuong2PhanSo(a, b); rutGonPhanSo(c); xuatPhanSo(c);
	cout << endl;
	return 0;
}