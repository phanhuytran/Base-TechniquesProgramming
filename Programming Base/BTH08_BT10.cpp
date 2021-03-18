//Project: BTH08_BT10.cpp
#include <iostream>
using namespace std;

void xuatSoLanXuatHienPT(int a[], int n)
{
	const int MAX = 99999;
	int soLan[MAX];
	for (int i = 0; i < MAX; i++)
		soLan[i] = 0;
	for (int i = 0; i < n; i++)
		soLan[a[i]]++;
	for (int i = 0; i < MAX; i++)
		if(soLan[i] > 0)
			cout << "Gia tri " << i << " xuat hien " << soLan[i] << " lan!\n";
}
int main()
{
	system("color 0a");
	const int MAXSIZE = 99;
	int a[MAXSIZE], n, dem = 1;
	cout << "Nhap so luong gia tri can dung: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> a[i];
	}
	xuatSoLanXuatHienPT(a, n);
	return 0;
}