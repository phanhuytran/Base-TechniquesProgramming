//Project: CHome_1851050056_TranPhanHuy_DeMau_Cau2.cpp
#include <iostream>
using namespace std;

struct SP
{
	char maSP[31], tenSP[31], tenKho[31];
	double donGia;
	int soLuong;
};
void nhap1SP(SP &a)
{
	cin.ignore();
	cout << "+ Nhap ma san pham: "; cin.getline(a.maSP, 31);
	cout << "+ Nhap ten san pham: "; cin.getline(a.tenSP,31);
	cout << "+ Nhap ten kho: "; cin.getline(a.tenKho, 31);
	cout << "+ Nhap don gia: "; cin >> a.donGia;
	cout << "+ Nhap so luong: "; cin >> a.soLuong;
}
void xuat1SP(SP a)
{
	cout << "+ Ma san pham: " << a.maSP << endl;
	cout << "+ Ten san pham: " << a.tenSP << endl;
	cout << "+ Ten kho: " << a.tenKho << endl;
	cout << "+ Don gia: " << a.donGia << endl;
	cout << "+ So luong: " << a.soLuong << endl;
}
void nhapSP(SP *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "----- Nhap thong tin cho san pham thu " << i + 1 << " -----\n";
		nhap1SP(*(a + i));
	}
}
void sapXepDGTangDan(SP *a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if ((a + i) -> donGia > (a + j) -> donGia)
			{
				SP tam = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = tam;
			}
}
void xuatSP(SP *a, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "----- Thong tin san pham thu " << i + 1 << " -----\n";
		xuat1SP(*(a + i));
	}
}
int demTenKhoB(SP *a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (*(a + i) -> tenSP == 'B')
			dem++;
	return dem;
}
int main()
{
	system("color 0a");
	SP *a;
	int n;
	do {
		cout << "Nhap so luong san pham: "; cin >> n;
		if (n <= 0 || n > 10)
			cout << "Ban da nhap sai so luong san pham. Vui long nhap lai!\n";
	} while (n <= 0 || n > 10);
	a = new SP[n];
	nhapSP(a, n);
	sapXepDGTangDan(a, n);
	xuatSP(a, n);
	cout << endl;
	if (demTenKhoB(a, n) != 0)
		cout << "Co tat ca " << demTenKhoB(a, n) << " san pham co ten bat dau bang chu B\n";
	else
		cout << 0 << endl;
	delete []a;
	a = nullptr;
	return 0;
}