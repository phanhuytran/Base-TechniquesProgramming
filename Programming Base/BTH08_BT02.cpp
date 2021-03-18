//Project: BTH08_BT02.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	double values[MAXSIZE];
	int currentSize, dem = 1;
	cout << "Nhap so luong gia tri can dung: ";
	cin >> currentSize;
	for (int i = 0; i < currentSize; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> values[i];
	}
	cout << "\nCac phan tu trong mang: ";
	for (int i = 0; i < currentSize; i++)
	{
		cout << values[i];
		if (i == currentSize - 1)
			cout << "";
		else
			cout << ", ";
	}
	cout << endl;
	return 0;
}