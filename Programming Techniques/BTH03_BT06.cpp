//Project: BTH03_BT06.cpp
#include <iostream>
using namespace std;

void nhap(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void daoNguoc(int* a, int n)
{
	for(int i = 0; i < n / 2; i++)
	{
		int tam = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tam; 
	}
}
int main()
{
	system("color 0a");
	int* p, n;
	cout << "Nhap so phan tu can dung: "; cin >> n;
	p = new int[n];
	nhap(p, n);
	cout << "Cac phan tu trong mang la: ";
	xuat(p, n);
	cout << "Mang sau khi duoc dao nguoc la: ";
	daoNguoc(p, n);
	xuat(p, n);
	delete []p;
	p = nullptr;
	return 0;
}