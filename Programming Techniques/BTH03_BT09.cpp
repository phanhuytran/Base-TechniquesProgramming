//Project: BTH03_BT09.cpp
#include<iostream>
using namespace std;

void nhap(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << " gia tri cho dong thu " << i + 1 << ": ";
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	}
}
void xuat(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
}
bool kTraSNT(int n)
{
	if (n < 2) return false;
	else if (n == 2) return true;
	else
		for (int i = 2; i <= sqrt(1.0 * n); i++)
			if (n % i == 0)
				return false;
	return true;
}
int tinhTongSNT(int **a, int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			if (kTraSNT(a[i][j]))
				tong += a[i][j];
	}
	return tong;
}
int main()
{
	system("color 0a");
	int r, c, **a;
	cout << "Nhap dong: "; cin >> r;
	cout << "Nhap cot: "; cin >> c;
	a = new int* [r];
	for (int i = 0; i < r; i++)
		a[i] = new int [c];
	nhap(a, r, c);
	cout << "Mang da duoc luu tru la: \n";
	xuat(a, r, c);
	if (tinhTongSNT(a, r, c) != 0)
		cout << "Tong cac so nguyen to trong mang la: " << tinhTongSNT(a, r, c) << endl;
	else
		cout << "Khong co bat ky so nguyen to nao trong mang\n";
	for (int i = 0; i < r; i++)
		delete [] a[i];
	delete [] a;
	a = nullptr;
}