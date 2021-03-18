//ProjectL BTH03_BT04.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 30;
	int n, dem = 0, max, vtMax = 0;
	do {
		cout << "Nhap so luong phan tu can dung: "; cin >> n;
		if (n <= 0 || n > MAXSIZE) cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (n <= 0 || n > MAXSIZE);
	int *p;
	p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": p[" << i << "] = ";
		cin >> *(p + i);
	}
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) % 2 != 0)
		{
			dem++;
			if (dem == 1)
				cout << "Cac phan tu so le trong mang la: ";
			cout << *(p + i) << " ";
		}
	}
	if (dem == 0)
		cout << "Khong co so le nao trong mang";
	max = p[0];
	for (int i = 0; i < n; i++)
		if (p[i] > max)
		{
			max = p[i];
			vtMax = i;
		}
	cout << "\nDia chi cua gia tri phan tu lon nhat trong mang la: " << int(p + vtMax) << endl;
	return 0;
}