//Project: BTH08_BT05.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int a[MAXSIZE];
	int n, dem = 1, vtXoa;
	cout << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Gia tri hien tai cua mang la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\nBan muon xoa tai vi tri: ";
	cin >> vtXoa;
	if (vtXoa == n)
		n--;
	else
	{
		for (int i = vtXoa - 1; i < n; i++)
			a[i] = a[i + 1];
		n--;
	}
	cout << "\nGia tri cua mang da bi xoa la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}