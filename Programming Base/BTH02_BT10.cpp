//Project: BTH02_Bai10.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	char a, b;
	int m, n;
	cout << "Nhap vao mot ky tu: ";
	cin >> a;
	m = static_cast<int>(a); //Chuyen ky tu thanh so trong bang ma ASCII
	cout << "Nhap vao 1 so nguyen: ";
	cin >> n;
	b = static_cast<char>(n); //Chuyen so thanh ky tu trong bang ma ASCII
	cout << "Ky tu " << a << " co ma ASCII tuong ung la: " << m << endl;
	cout << "Ky tu " << n << " co ma ASCII tuong ung la: " << b << endl;
	return 0;
}