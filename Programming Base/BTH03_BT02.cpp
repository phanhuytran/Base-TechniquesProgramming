//Project: BTH3_BT02.cpp
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Nhap vao so nguyen thu nhat: ";
	cin >> a;
	cout << "Nhap vao so nguyen thu hai: ";
	cin >> b;
	if (a > b)
		cout << "So nguyen lon nhat la: " << a << endl;
	else
		cout << "So nguyen lon nhat la: " << b << endl;
	
	system("pause");
	return 0;

}