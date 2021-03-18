//Project: BTH08_BT08.cpp
#include <iostream>
using namespace std;

void xuatSoLanXuatHienPT(int a[], int n, int x)
{
	int DemPTuX = 0;
	for(int i = 0; i < n; i++)
		if (a[i] == x)
			DemPTuX = DemPTuX + 1;
	cout << "Gia tri " << x << " xuat hien " << DemPTuX << " lan!\n";
}
int main()
{
	system("color 0a");
	const int MAXSIZE = 99;
	int a[MAXSIZE], n, x, dem = 1;
	cout << "Nhap so luong gia tri can dung: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "So phan tu x can kiem tra: ";
	cin >> x;
	xuatSoLanXuatHienPT(a, n, x);
	return 0;
}