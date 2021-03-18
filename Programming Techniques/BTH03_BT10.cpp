//Project: BTH03_BT10.cpp
#include <iostream>
using namespace std;

void khoiTaoGTNgauNhien(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			*(*(a + i) + j) = rand() % 10;
}
void xuat(int **a, int r, int c)
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
			cout << *(*(a + i) + j) << "\t";
		cout << endl;
	}
}
void tinhTong2MaTran(int **x, int **y, int **z, int r, int c)
{
	
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			z[i][j] = x[i][j] + y[i][j];
}
void tinhTich2MaTran(int **x, int **y, int **z, int ra, int ca, int cb)
{
	for(int i = 0; i < ra; i++)
		for(int j = 0; j < ca; j++)
			{
				z[i][j] = 0;
				for(int k = 0; k < cb; k++)
					z[i][j] += x[i][k] * y[k][j];
			}
}
int main()
{
	int **x, **y, **z, ra, ca, rb, cb;
	//Tinh Tong 2 ma tran A va B
	do {
		cout << "Nhap so dong ma tran A: "; cin >> ra;
		cout << "Nhap so cot ma tran A: "; cin >> ca;
		cout << "Nhap so dong ma tran B: "; cin >> rb;
		cout << "Nhap so cot ma tran B: "; cin >> cb;
		if (ra <= 0 || ca <= 0 || rb <= 0 || cb <= 0 || ra != rb || ca != cb)
			cout << "Nhap sai. Vui long nhap lai\n";
	} while (ra <= 0 || ca <= 0 || rb <= 0 || cb <= 0 || ra != rb || ca != cb);
	x = new int *[ra]; for (int i = 0; i < ra; i++) x[i] = new int[ca];
	y = new int *[rb]; for (int i = 0; i < rb; i++) y[i] = new int[cb];
	z = new int *[rb]; for (int i = 0; i < rb; i++) z[i] = new int[cb];
	khoiTaoGTNgauNhien(x, ra, ca);
	cout << "Ma Tran A la:\n";
	xuat(x, ra, ca);
	khoiTaoGTNgauNhien(y, rb, cb);
	cout << "Ma tran B la:\n";
	xuat(y, rb, cb);
	cout << "Tong hai ma tran A & B la: \n";
	tinhTong2MaTran(x, y, z, ra, ca);
	xuat(z, ra, ca);
	for (int i = 0; i < ra; i++) delete x[i]; delete []x; x = nullptr;
	for (int i = 0; i < rb; i++) delete y[i]; delete []y; y = nullptr;
	for (int i = 0; i < rb; i++) delete z[i]; delete []z; z = nullptr;
	//Tinh tich 2 ma tran A va B
	do {
		cout << "Nhap so dong ma tran A: "; cin >> ra;
		cout << "Nhap so cot ma tran A: "; cin >> ca;
		cout << "Nhap so dong ma tran B: "; cin >> rb;
		cout << "Nhap so cot ma tran B: "; cin >> cb;
		if (ra <= 0 || ca <= 0 || rb <= 0 || cb <= 0 || ca != rb)
			cout << "Nhap sai. Vui long nhap lai\n";
	} while (ra <= 0 || ca <= 0 || rb <= 0 || cb <= 0 || ca != rb);
	x = new int *[ra]; for (int i = 0; i < ra; i++) x[i] = new int[ca];
	y = new int *[rb]; for (int i = 0; i < rb; i++) y[i] = new int[cb];
	z = new int *[ra]; for (int i = 0; i < ra; i++) z[i] = new int[cb];
	khoiTaoGTNgauNhien(x, ra, ca);
	cout << "Ma Tran A la:\n";
	xuat(x, ra, ca);
	khoiTaoGTNgauNhien(y, rb, cb);
	cout << "Ma tran B la:\n";
	xuat(y, rb, cb);
	cout << "Tich hai ma tran A & B la: \n";
	tinhTich2MaTran(x, y, z, ra, ca, cb);
	xuat(z, ra, cb);
	for (int i = 0; i < ra; i++) delete x[i]; delete []x; x = nullptr;
	for (int i = 0; i < rb; i++) delete y[i]; delete []y; y = nullptr;
	for (int i = 0; i < ra; i++) delete z[i]; delete []z; z = nullptr;
	return 0;
}
