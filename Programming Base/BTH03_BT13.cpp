//Project: BTH3_BT13.cpp
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	double x;
	double D;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	D =  b * b - 4 * a * c;
	if (a == 0)
		if (b != 0)
			cout << "Nghiem cua phuong trinh bac nhat la: " << x << endl;
		else
			if ((b == 0) && (c == 0))
				cout << "Phuong trinh vo so nghiem" << endl;
			else
				cout << "Phương trinh vo nghiem" << endl;
	else
		if (D > 0)
			cout << "Phuong trinh co 2 nghiem phan biet: x1 = " << (-b + sqrt(D)) / (2 * a) << " va x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
		else
			if (D == 0)
				cout << "Phuong trinh co nghiem kep: x = " << -b / (2 * a) << endl;
			else
				cout << "Phuong trinh vo nghiem" << endl;
	
	system("pause");
	return 0;
}