//Project: BTH06_BT07.cpp
#include <iostream>
using namespace std;

bool kTSoNT(int n)
{
	if (n < 2)
		return false;
	else
		for (int i = 2; i <= sqrt(n * 1.0); i++)
			if (n % i == 0)
				return false;
	return true;
}
int main()
{
	system("color 0a");
	int x;
	cout << "Nhap vap 1 so nguyen: ";
	cin >> x;
	if (kTSoNT(x))
		cout << "Ket qua: " << x << " la so nguyen to\n";
	else
		cout << "Ket qua: " << x << " khong phai la so nguyen to\n";
	return 0;
}