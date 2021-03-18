//Project: BTH05_BT06.cpp
#include <iostream>
#include <string>
using namespace std;

struct SanPham
{
	char maSP[11];
	string tenSP;
	double donGia;
	int soLuongTonKho;
};
int main()
{
	system("color 0a");
	SanPham *a;
	int n;
	do {
		cout << "Nhap so luong san pham: "; cin >> n;
		if (n <= 0 || n > 30)
			cout << "Ban da nhap sai so luong san pham. Vui long nhap lai!\n";
	} while (n <= 0 || n > 30);
	a = new SanPham[n];
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin cho san pham thu " << i + 1 << ":\n";
		cout << "+ Nhap ma san pham: "; cin.getline(a -> maSP, 11);
		cout << "+ Nhap ten san pham: "; getline(cin, a -> tenSP);
		cout << "+ Nhap don gia: "; cin >> a -> donGia;
		cout << "+ Nhap so luong ton kho: "; cin >> a -> soLuongTonKho;
		cout << "\n---------- Thong Tin San Pham ----------\n";
		cout << "Thong tin cua san pham thu " << i + 1 << ":\n";
		cout << "+ Ma san pham: " << a -> maSP << endl;;
		cout << "+ Ten san pham: " << a -> tenSP << endl;
		cout << "+ Don gia: " << a -> donGia << endl;
		cout << "+ So luong ton kho: " << a -> soLuongTonKho << endl << endl;;
	}

	delete []a;
	a = nullptr;
	return 0;
}