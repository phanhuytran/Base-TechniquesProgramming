//Project: BTH02_BT13.cpp - Xuat ra 1 tam giac Pascal
#include <iostream>
using namespace std;

int tinhGiaiThua(int n)
{
	if (n == 0 || n == 1) return 1;
	return n * tinhGiaiThua(n - 1);
}
int tinhToHop(int n, int r) {return tinhGiaiThua(r) / (tinhGiaiThua(n) * tinhGiaiThua(r - n));}
int main()
{
	system("color 0a");
	int n;
	cout << "Nhap canh tam giac: "; cin >> n;
	cout << "Tam giac Pascal:\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
			cout << tinhToHop(j, i) << "\t";
		cout << endl;
	}
	return 0;
}