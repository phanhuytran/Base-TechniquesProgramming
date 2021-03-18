//Project: BTH02_BT03.cpp
#include <iostream>
using namespace std;

int tinhFibonacci(int n)
{
	if (n == 0 || n == 1) return n;
	return tinhFibonacci(n - 1) + tinhFibonacci(n - 2);
}
int main()
{
	system("color 0a");
	int n;
	do {
		cout << "Nhap vao so nguyen n: "; cin >> n;
		if (n <= 1)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (n <= 1);
	cout << "Ket qua Fibonacci cua " << n << " la: " << tinhFibonacci(n) << endl;
	return 0;
}