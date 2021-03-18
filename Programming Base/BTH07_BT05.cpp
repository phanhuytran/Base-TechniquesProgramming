//Project: BTH07_BT05.cpp
#include <iostream>
using namespace std;

void hoanDoi2SN(int &a, int &b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}
void sapXep2SNTangDan(int x, int y)
{
	if (x < y)
		cout << "Ket qua sap xep 2 so nguyen tang dan la: " << x << " -> " << y << endl;
	else
	{
		hoanDoi2SN(x, y);
		cout << "Ket qua sap xep 2 so nguyen tang dan la: " << x << " -> " << y << endl;
	}
}
int main ()
{
	system("color 0a");
	int m, n;
	cout << "Nhap so nguyen thu 1: ";
	cin >> m;
	cout << "Nhap so nguyen thu 2: ";
	cin >> n;
	sapXep2SNTangDan(m, n);
	return 0;
}