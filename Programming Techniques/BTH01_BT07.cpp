//Project: BTH01_BT07.cpp
#include <iostream>
using namespace std;
const int MAXR = 20, MAXC = 20;

void nhap(int array[][MAXC], int r, int c);
void xuat(int array[][MAXC], int r, int c);
double tinhTrungBinhCong(int array[][MAXC], int r, int c);
bool tim(int array[][MAXC], int r, int c, int m);
void hoanVi(int array[][MAXC], int r, int c, int &x, int &y);
int tinhTichCuaCot(int array[][MAXC], int r, int c, int n);
int main()
{
	system("color 0a");
	int array[MAXR][MAXC], r, c, m, n, x, y;
	do {
		cout << "Ban can nhap so dong: ";
		cin >> r;
		cout << "Ban can nhap so cot: ";
		cin >> c;
		if (r <= 0 || r > MAXR || c <= 0 || c > MAXC)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (r <= 0 || r > MAXR || c <= 0 || c > MAXC);
	//7a
	nhap(array, r, c);
	xuat(array, r, c);
	//7b
	cout << "Gia tri trung binh cong cua cac phan tu trong mang la: " << tinhTrungBinhCong(array, r, c) << endl;
	//7c
	cout << "Nhap vao gia tri ma ban muon kiem tra: ";
	cin >> m;
	if (tim(array, r, c, m))
		cout << "Gia tri " << m << " ton tai trong mang\n";
	else
		cout << "Gia tri " << m << " khong ton tai trong mang\n";
	//7d
	cout << "Nhap vao 2 gia tri x va y: ";
	cin >> x >> y;
	if (!(tim(array, r, c, x) && tim(array, r, c, y)))
		cout << "Gia tri ma ban can hoan doi khong ton tai trong mang\n";
	else
	{
		hoanVi(array, r, c, x, y);
		cout << "Gia tri x va y sau khi hoan doi trong mang la: " << endl;
		xuat(array, r, c);
	}
	//7e
	do {
		cout << "Nhap vao cot can tinh tich: ";
		cin >> n;
		if (n <= 0 || n > c)
			cout << "Ban da nhap sai so cot. Vui long nhap lai\n";
		else
			cout << "Tich cac gia tri so trong cot " << n << " da nhan vao la: " << tinhTichCuaCot(array, r, c, n) << endl;
	} while (n <= 0 || n > c);
	return 0;
}
void nhap(int array[][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			cout << "Nhap gia tri a[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
}
void xuat(int array[][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << array[i][j] << "\t";
		cout << endl;
	}
}
double tinhTrungBinhCong(int array[][MAXC], int r, int c)
{
	double tong = 0, trungBinhCong;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			tong += array[i][j];
	return double(tong) / (r * c);
}
bool tim(int array[][MAXC], int r, int c, int m)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (m == array[i][j])
				return true;
	return false;
}
void hoanVi(int array[][MAXC], int r, int c, int &x, int &y)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (array[i][j] == x)
				 array[i][j] = y;
			else
				if (array[i][j] == y)
					array[i][j] = x;
}
int tinhTichCuaCot(int array[][MAXC], int r, int c, int n)
{
	int tich = 1;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (n - 1 == j)
				tich *= array[i][j];
	return tich;
}