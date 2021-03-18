//Project: BTH08_BT04.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int a[MAXSIZE];
	int n, dem = 1;
	cout << "Nhap so luong gia tri can dung: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> a[i];
	}
	double tong = 0;
	for (int i = 0; i < n; i++)
		tong += a[i];
	cout << "\nTong = " << tong << endl;
	cout << "Trung binh = " << tong / n << endl;
	return 0;
}