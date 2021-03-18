//Project: BTH01_BT08.cpp
#include <iostream>
#define MAXSIZE 100
using namespace std;

void khoiTaoGTNgauNhien(int a[MAXSIZE][MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand();
			cout << "\t" << "a[" << i << "][" << j << "] = " << a[i][j];
			cout << endl;
		}
	}
}
void xuat(int a[MAXSIZE][MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
}
void tinhTong2MaTran(int a[MAXSIZE][MAXSIZE], int b[MAXSIZE][MAXSIZE], int c[MAXSIZE][MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
}
void tinhTich2MaTran(int a[MAXSIZE][MAXSIZE], int b[MAXSIZE][MAXSIZE], int c[MAXSIZE][MAXSIZE], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int k = 0; k < n; k++)
		{
			c[i][k] = 0;
			for(int j = 0; j < n; j++)
				c[i][k] = c[i][k] + a[i][j] * b[j][k];
		}
	}
}
int main()
{
	system("color 0a");
	int a[MAXSIZE][MAXSIZE], b[MAXSIZE][MAXSIZE], c[MAXSIZE][MAXSIZE], n;
	do {
		cout << "Nhap cap ma tran: ";
		cin >> n;
		if (n <= 0 || n > MAXSIZE)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (n <= 0 || n > MAXSIZE);
	cout << "Khoi tao gia tri ngau nhien cua ma tran A: \n";
	khoiTaoGTNgauNhien(a, n);
	cout << "Khoi tao gia tri ngau nhien cua ma tran B: \n";
	khoiTaoGTNgauNhien(b, n);
	cout << "Ma tran A da duoc luu tru la: \n";
	xuat(a, n);
	cout << "Ma tran B da duoc luu tru la: \n";
	xuat(b, n);
	cout << "Tong hai ma tran A va B la: \n";
	tinhTong2MaTran(a, b, c, n);
	xuat(c, n);
	cout << "Tich hai ma tran A va B la: \n";
	tinhTich2MaTran(a, b, c, n);
	xuat(c, n);
	return 0;
}