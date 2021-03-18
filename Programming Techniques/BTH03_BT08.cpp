//Project: BTH03_BT08.cpp
#include<iostream>
using namespace std;

int tinhTGPC(int r, int c)
{
	if (c == 0 || c == r) return 1;
	return tinhTGPC(r - 1, c) + tinhTGPC(r - 1, c - 1);
}
void xuatTGPC(int **a, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << *(*(a + i) + j) << "\t";
		cout << endl;
	}
}
int main()
{
	system("color 0a");
	int h, **a;
	do {
		cout << "Nhap chieu cao tam giac Pascal: "; cin >> h;
		if (h <= 0) cout << "Nhap sai. Nhap lai!\n";
	} while (h <= 0);
	a = new int* [h];
	for (int i = 0; i < h; i++)
		a[i] = new int [h];
	cout << "Tam giac Pascal voi h = " << h << " la: \n";
	for (int i = 0; i < h; i++)
		for (int j = 0; j <= i; j++)
			a[i][j] = tinhTGPC(i, j);
	xuatTGPC(a, h);
	for (int i = 0; i < h; i++)
		delete [] a[i];
	delete [] a;
	a = nullptr;
}