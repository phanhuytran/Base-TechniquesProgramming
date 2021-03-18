//Project: BTH08_BT03.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	double a[MAXSIZE];
	int n, dem = 1;
	cout << "Nhap so luong gia tri can dung: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i])
			max = a[i];
	cout << "\nPhan tu lon nhat cua mang la: " << max << endl;
	return 0;
}