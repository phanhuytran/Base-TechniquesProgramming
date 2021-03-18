//Project: BTH4_BT08.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, tCS = 0, tam, chuSo;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> n;
	if (n > 0)
	{
		tam = n;
		while (tam > 0)
		{
			chuSo = tam % 10;
			if (chuSo % 2 != 0)
				tCS += chuSo;
			tam = tam / 10;
		}
		cout << "Tong cac chu so le cua " << n << " la: " << tCS << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}