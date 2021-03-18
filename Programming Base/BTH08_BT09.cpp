//Project: BTH08_BT09.cpp
#include <iostream>
using namespace std;

void xoa(int a[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}
void xoaPhanTuTrungNhau(int a[], int& n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] == a[j])
			{
				xoa(a, n, j);
				j--;
			}
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
	xoaPhanTuTrungNhau(a, n);
	cout << "Cac phan tu hien tai cua mang la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
//void xoa(int arr[], int& arrSize, int p)
//{
//	if (p == arrSize)
//		arrSize--;
//	else
//	{
//		for (int i = p - 1; i < arrSize; i++)
//			arr[i] = arr[i + 1];
//		arrSize--;
//	}
//}
//void xoaPhanTuTrungNhau(int a[], int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1;  j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				xoa(a, n, j);
//				j--;
//			}
//		}
//	}
//}