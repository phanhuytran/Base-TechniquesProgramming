//Project: BTH02_BT06.cpp
#include <iostream>
using namespace std;

int timSDN(int n, int soDaoNguoc)
{
	if (n < 10) return n + soDaoNguoc * 10; else
	{
		soDaoNguoc = soDaoNguoc * 10 + n % 10; 
		return timSDN(n / 10, soDaoNguoc);
	}
}
int main()
{
	system("color 0a");
	int n, soDaoNguoc = 0;
	do {
		cout << "Nhap vao so nguyen n: "; cin >> n;
		if (n <= 0)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (n <= 0);
	cout << "Ket qua: " << n << " co so dao nguoc la " << timSDN(n, soDaoNguoc) << endl;
	return 0;
}