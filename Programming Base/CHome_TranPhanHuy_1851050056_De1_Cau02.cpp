//CHome_TranPhanHuy_1851050056_De1TKCK_Cau02.cpp
#include <iostream>
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
int demSoLanXuatHien(int a[], int n, int x);
bool timGTSoAm(int a[], int n);
int main()
{
	system("color 0a");
	const int MAXSIZE = 30;
	int a[MAXSIZE], n, x;
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n >= 1 && n <= MAXSIZE)
			break;
		cout << "Chi nhap so luong phan tu tu 1 den 30. Vui long nhap lai!\n";
	} while (n < 1 || n > MAXSIZE);
	nhap(a, n);
	cout << "Mang hien tai la: ";
	xuat(a, n);
	cout << "Gia tri can tim: ";
	cin >> x;
	demSoLanXuatHien(a, n, x);
	bool kT = timGTSoAm(a, n);
	if (kT == true)
		cout << "Mang vua nhap co so nguyen am\n";
	else
		cout << "Mang vua nhap khong co so nguyen am\n";
	return 0;
}
void nhap(int a[], int n)
{
	int d = 1;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << d++ << ": ";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int demSoLanXuatHien(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	cout << "Gia tri " << x << " xuat hien " << dem << " lan\n";
	return dem;
}
bool timGTSoAm(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return true;
	return false;
}