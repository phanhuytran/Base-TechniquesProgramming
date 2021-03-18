//Project: BTH04_BT04.cpp
#include <iostream>
using namespace std;

int main()
{
	int n, tam = 0, cs = 0, tong = 0, dcs = 0;
	cout << "Nhap vao 1 so nguyen n: ";
	cin >> n;
	 while (n <= 1)
	{
		cout << "Ban da nhap sai! Vui long nhap lai: ";
		cin >> n;
	}
	tam = n;
	while (tam > 0)
	{
		dcs++;
		int chuSo = tam % 10;
		tong = tong + chuSo;
		tam = tam / 10;
	}
	cout << "Tong cac chu so da nhap la: " << tong << endl;
	cout << "Co tat ca la: " << dcs << " chu so" << endl;
	return 0;
}