//Project: BTH02_BT01.cpp
#include <iostream>
using namespace std;

int tinhS1(int n)
{
	if (n == 1) return 1;
	return n + tinhS1(n - 1);
}
int tinhS2(int n)
{
	if (n == 1) return 1;
	return n * n + tinhS2(n - 1);
}
double tinhS3(int n)
{
	if (n == 1) return 1;
	return 1.0 / n + tinhS3(n - 2);
}
int tinhGT(int n)
{
	if (n == 1) return 1;
	return n * tinhGT(n - 1);
}
int tinhS4(int n)
{
	if (n == 1) return 1;
	return tinhGT(n) + tinhS4(n - 1);
}
int main()
{
	system("color 0a");
	int n;
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0)
			cout << "Nhap sai. Nhap lai!\n";
	} while (n <= 0);
	cout << "S1 = " << tinhS1(n) << endl;
	cout << "S2 = " << tinhS2(n) << endl;
	cout << "S4 = " << tinhS4(n) << endl;
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0 || n % 2 == 0)
			cout << "Nhap sai. Nhap lai!\n";
	} while (n <= 0 || n % 2 == 0);
	cout << "S3 = " << tinhS3(n) << endl;
	return 0;
}