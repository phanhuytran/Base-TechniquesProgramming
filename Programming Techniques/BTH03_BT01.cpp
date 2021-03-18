//ProjectL BTH03_BT01.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int x;
	int *p;
	p = &x;
	*p = 80;
	cout << "Dia chi cua bien x la: " << int(&x);
	cout << "\nDia chi luu trong con tro p la: " << int(p);
	cout << "\nGia tri cua bien ma p tro den la: " << x;
	cout << "\nGia tri cua bien x la: " << *p << endl;
	return 0;
}