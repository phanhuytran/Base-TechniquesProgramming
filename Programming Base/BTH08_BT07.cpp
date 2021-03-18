//Project: BTH08_BT07.cpp
#include <iostream>
using namespace std;

int timVTMin(int a[], int n)
{
	int i, vTMin = 1;
	int min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			vTMin = i + 1;
		}
		return vTMin;
}
int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int a[MAXSIZE], n, dem = 1;
	cout << "Nhap so luong gia tri can dung: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Cac phan tu vua nhap vao mang la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << "Vi tri xuat hien dau tien cua phan tu nho nhat trong mang la: " << timVTMin(a, n) << "\n";
	return 0;
}