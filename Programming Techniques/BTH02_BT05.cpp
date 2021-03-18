//Project: BTH02_BT05.cpp
#include <iostream>
using namespace std;

int demSCS(int n)
{
	if (n == 0) return 0; else
		if (n < 10) return 1; else
			return 1 + demSCS(n / 10);
}
int main()
{
	system("color 0a");
	int n;
	do {
		cout << "Nhap vao so nguyen n: "; cin >> n;
		if (n <= 0)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (n <= 0);
	cout << "Ket qua: " << n << " co tat ca " << demSCS(n) << " chu so\n";
	return 0;
}