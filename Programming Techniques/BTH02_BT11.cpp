//Project: BTH02_BT11.cpp - Tinh tong cac gia tri cua mang 1 chieu luu tru so nguyen
#include <iostream>
using namespace std;

int tinhTong(int a[], int n)
{
	if (n == 1)
		return a[0];
	return tinhTong(a, n - 1) + a[n - 1];
}
int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int array[MAXSIZE], n;
	cout << "Nhap so luong gia tri can dung: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << " a[" << i << "]: ";
		cin >> array[i];
	}
	cout << "Mang 1 chieu da duoc luu tru la: ";
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << "\nTong cac phan tu trong mang 1 chieu la: " << tinhTong(array, n) << endl;
	return 0;
}