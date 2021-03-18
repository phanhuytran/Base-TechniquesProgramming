//Project: BTH07_BT03.cpp
#include <iostream>
using namespace std;

int tinhGiaiThua(int n)
{
	int tich1 = 1;
	for (int i = 1; i <= n; i++)
		tich1 *= i;
	return tich1;
}
int tinhToHop(int n, int k)
{
	int chap;
	chap = tinhGiaiThua(n) / (tinhGiaiThua(k) * tinhGiaiThua(n - k));
	return chap;
}
void xuatTgPascal(int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << tinhToHop(i, j) << "\t";
		cout << endl;
	}
}
int main()
{
	system("color 0a");
	int c;
	cout << "Nhap chieu cao tam giac: ";
	cin >> c;
	if (c > 0)
		xuatTgPascal(c);
	else
		cout << "\nc. Ban da nhap sai canh tam giac!\n\n";
	return 0;
}