//Project: BTH05_BT04.cpp
#include <iostream>
using namespace std;

int main()
{
	int n = 0, giaiThua = 1;
	cout << "Nhap vao 1 so nguyen duong: ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 1; n >= i; i++)
			giaiThua *= i;
		cout << n << "! = " << giaiThua << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}