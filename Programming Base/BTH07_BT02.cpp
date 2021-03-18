//Project: BTH07_BT02.cpp
#include <iostream>
using namespace std;

int timUCLN(int m, int n) 
{
	while (n > 0) 
	{
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}
int main()
{
	system("color 0a");
	int x, y, a;
	cout << "Nhap 2 so nguyen duong: ";
	cin >> x >> y ;
	a = timUCLN(x, y);
	cout << "Uoc chung lon nhat la: " << a << endl;
	cout << "Ket qua: " << x << "/" << y << " = " << x / a << "/" << y / a << endl;
	return 0;
}