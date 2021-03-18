//Project: BTH3_BT12.cpp
#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	double x;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	x = -b / a;
	if (a != 0)
		cout << "Nghiem cua phuong trinh bac nhat la: " << x << endl;
	else
		if ((a == 0) && (b == 0))
			cout << "Phuong trinh vo so nghiem" << endl;
		else
			cout << "Phương trinh vo nghiem" << endl;

	system("pause");
	return 0;
}