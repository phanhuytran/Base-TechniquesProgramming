//Project: BTH02_BT10.cpp
#include <iostream>
#include <Windows.h>
using namespace std;

int timUCLN_Cach1(int a, int b)
{
	if (b == 0) return a;
	return timUCLN_Cach1(b, a % b);
}
int timUCLN_Cach2(int a, int b)
{
	if (b == 0) return a; else
	{
		int d = a % b;
		a = b; b = d;
		return timUCLN_Cach2(a, b);
	}
}
int timUCLN_Cach3(int x, int y)
{
	int r;
	if (x < y)
	{
		r = x; x = y; y = r;
	}
	if (r = x % y)
	{
		x = y; y = r;
		return(timUCLN_Cach3(x, y));
	}
	return y;
}
int main()
{
	int a, b;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "Nhap a: "; cin >> a;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Nhap b: "; cin >> b;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "Cach 1: Uoc chung lon nhat cua " << a << " va " << b << " la: " << timUCLN_Cach1(a, b) << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "Cach 2: Uoc chung lon nhat cua " << a << " va " << b << " la: " << timUCLN_Cach2(a, b) << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "Cach 3: Uoc chung lon nhat cua " << a << " va " << b << " la: " << timUCLN_Cach3(a, b) << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	return 0;
}