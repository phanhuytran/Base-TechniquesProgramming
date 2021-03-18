//ProjectL BTH03_BT05.cpp
#include <iostream>
using namespace std;

int tinhFibonacci(int n)
{
	if (n == 0 || n == 1) return n;
	return tinhFibonacci(n - 1) + tinhFibonacci(n - 2);
}
void xuatFibonacci(int *n)
{
	for (int i = 0; i <= *n; i++)
		cout << tinhFibonacci(i) << " ";
	cout << endl;
}
int main()
{
	system("color 0a");
	int *p;
	p = new int;
	do {
		cout << "Nhap so Fibonacci: "; cin >> *p;
		if (*p <= 1)
			cout << "Ban da nhap sai. Vui long nhap lai!\n";
	} while (*p <= 1);
	cout << "Day so Fibonacci cua " << *p << " la: ";
	xuatFibonacci(p);
	delete p;
	p = nullptr;
	return 0;
}