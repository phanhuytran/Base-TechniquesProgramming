//Project: BTH03_BT07.cpp
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
int *tim(int *a, int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return &a[i];
	return NULL;
}
int main()
{
	int* p, n, x;
	cout << "Nhap so phan tu: "; cin >> n;
	p = new int[n];
	nhap(p, n);
	cout << "Cac phan tu trong mang la: ";
	xuat(p, n);
	cout << "Nhap gia tri ma ban muon tim: "; cin >> x;
	if (tim(p, n, x) == NULL)
		cout << x << " khong ton tai trong mang\n";
	else
		cout << "Vi tri dau tien cua " << x << " trong mang la: " << int(tim(p, n, x)) << endl;
	delete []p;
	p = nullptr;
	return 0;
}