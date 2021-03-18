//Project: BTH01_BT06.cpp
#include <iostream>
#include <Windows.h>
using namespace std;
const int MAXR = 20, MAXC = 20;

void nhap(int array[][MAXC], int r, int c);
void xuat(int array[][MAXC], int r, int c);
void tinhTong2MaTran(int x[][MAXC], int y[][MAXC], int z[][MAXC], int r, int c);
void tinhTich2MaTran(int x[][MAXC], int y[][MAXC], int z[][MAXC], int ra, int cb, int ca);
int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	int x[MAXR][MAXC], y[MAXR][MAXC], z[MAXR][MAXC], ra, ca, rb, cb;
	//Tinh tong 2 ma tran
	do {
		cout << "Ban can nhap so dong cua ma tran X: ";
		cin >> ra;
		cout << "Ban can nhap so cot cua ma tran X: ";
		cin >> ca;
		cout << "Ban can nhap so dong cua ma tran Y: ";
		cin >> rb;
		cout << "Ban can nhap so cot cua ma tran Y: ";
		cin >> cb;
		if (ra <= 0 || ra > MAXR || cb <= 0 || cb > MAXC || ra != rb || ca != cb)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (ra <= 0 || ra > MAXR || cb <= 0 || cb > MAXC || ra != rb || ca != cb);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "Ban can nhap ma tran X: \n";
	nhap(x, ra, ca);
	cout << "Ma tra X la: \n";
	xuat(x, ra, ca);
	cout << "Ban can nhap ma tran Y: \n";
	nhap(y, rb, cb);
	cout << "Ma tra Y la: \n";
	xuat(y, rb, cb);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Tong 2 ma tran X va Y la: \n";
	tinhTong2MaTran(x, y, z, ra, ca);
	xuat(z, ra, ca);
	system("cls");
	//Tinh tich 2 ma tran
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	do {
		cout << "Ban can nhap so dong cua ma tran X: ";
		cin >> ra;
		cout << "Ban can nhap so cot cua ma tran X: ";
		cin >> ca;
		cout << "Ban can nhap so dong cua ma tran Y: ";
		cin >> rb;
		cout << "Ban can nhap so cot cua ma tran Y: ";
		cin >> cb;
		if (ra <= 0 || ra > MAXR || ca <= 0 || ca > MAXC || rb <= 0 || rb > MAXR || cb <= 0 || cb > MAXC || ca != rb)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (ra <= 0 || ra > MAXR || ca <= 0 || ca > MAXC || rb <= 0 || rb > MAXR || cb <= 0 || cb > MAXC || ca != rb);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "Ban can nhap ma tran X: \n";
	nhap(x, ra, ca);
	cout << "Ma tra X la: \n";
	xuat(x, ra, ca);
	cout << "Ban can nhap ma tran Y: \n";
	nhap(y, rb, cb);
	cout << "Ma tra Y la: \n";
	xuat(y, rb, cb);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "Tich 2 ma tran X va Y la: \n";
	tinhTich2MaTran(x, y, z, ra, cb, ca);
	xuat(z, ra, cb);
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
void tinhTong2MaTran(int x[][MAXC], int y[][MAXC], int z[][MAXC], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			z[i][j] = x[i][j] + y[i][j];
}
void tinhTich2MaTran(int x[][MAXC], int y[][MAXC], int z[][MAXC], int ra, int cb, int ca)
{
	for (int i = 0; i <= ra; i++)
		for (int j = 0; j <= cb; j++)
		{
			z[i][j] = 0;
			for (int k = 0; k < ca; k++)
				z[i][j] += x[i][k] * y[k][j];
       }
}