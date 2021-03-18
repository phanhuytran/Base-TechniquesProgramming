//Project: BTH01_BT04.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	//4a
	const int MAXROW = 5, MAXCOLUMN = 6;
	int array[MAXROW][MAXCOLUMN], r, c, x, dem = 0;
	do {
		cout << "Ban can nhap so dong: ";
		cin >> r;
		cout << "Ban can nhap so cot: ";
		cin >> c;
		if (r <= 0 || r > MAXROW || c <= 0 || c > MAXCOLUMN)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (r <= 0 || r > MAXROW || c <= 0 || c > MAXCOLUMN);
	//nhap
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			cout << "Nhap gia tri a[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	//xuat
	cout << "Mang da duoc luu tru la: \n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	//4b
	int lc, m, n;
	cout << "\n--------Menu--------\n1. Dong\t\t2. Cot\n" << "Ban muon tinh tong dong hay cot: ";
	cin >> lc;
	switch(lc)
	{
	case 1:
		{
			do {
				cout << "Ban muon tinh tong dong may: ";
				cin >> m;
				if (m <= 0 || m > r)
					cout << "Ban da nhap sai so dong. Vui long nhap lai!\n";
			} while (m <= 0 || m > r);
			int sumr = 0;
			for (int i = 0; i < r; i++)
				for (int j = 0; j < c; j++)
					if (m - 1 == i)
						sumr += array[i][j];
			cout << "Tong cac gia tri cua dong " << m << " la: " << sumr << endl;
			break;
		}
	case 2:
		{
			do {
				cout << "Ban muon tinh tong cot may: ";
				cin >> n;
				if (n <= 0 || n > c)
					cout << "Ban da nhap sai so cot. Vui long nhap lai!\n";
			} while (n <= 0 || n > c);
			int sumc = 0;
			for (int i = 0; i < r; i++)
				for (int j = 0; j < c; j++)
					if (n - 1 == j)
						sumc += array[i][j];
			cout << "Tong cac gia tri cua cot " << n << " la: " << sumc << endl;
			break;
		}
	default:
		cout << "Ngoai kha nang thuc hien\n";
	}
	//4c
	cout << "\nNhap vao gia tri ma ban can tim: ";
	cin >> x;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (x == array[i][j])
				dem++;
	if (dem == 0)
		cout << "Gia tri " << x << " khong ton tai trong mang\n";
	else
		cout << "Gia tri " << x << " ton tai " << dem << " lan trong mang tai vi tri: \n";
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (x == array[i][j])
			{
				dem++;
				cout << "a[" << i << "][" << j << "]"<< " (Dong " << i + 1 << ", cot " << j + 1 << ")" << endl;
			}
	return 0;
}