//Project: BTH06_BT02.cpp
#include <iostream>
using namespace std;

int timSoLonNhat2So(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}
int timSoLonNhat3So(int a, int b, int c)
{
	return timSoLonNhat2So(timSoLonNhat2So(a, b), c);
}
int main()
{
	system("color 0a");
	int lc = 0;
	while (lc != 1 || lc != 2)
	{
		int x, y, z, lc;
		cout << "1. Tim so lon nhat cua 2 so nguyen\n";
		cout << "2. Tim so lon nhat cua 3 so nguyen\n";
		cout << "Tuy chon: "; cin >> lc;
		switch(lc)
		{
		case 1:
			{
				cout << "Nhap vao so thu 1: ";
				cin >> x;
				cout << "Nhap vao so thu 2: ";
				cin >> y;
				cout << "So lon nhat cua " << x << " va " << y << " la: " << timSoLonNhat2So(x, y) << endl << endl;
				break;
			}
		case 2:
			{
				cout << "Nhap vao so thu 1: ";
				cin >> x;
				cout << "Nhap vao so thu 2: ";
				cin >> y;
				cout << "Nhap vao so thu 3: ";
				cin >> z;
				cout << "So lon nhat cua " << x << " va " << y << " va " << z <<" la: " << timSoLonNhat3So(x, y, z) << endl << endl;
				break;
			}
		default:
			cout << "Ngoai kha nang thuc hien!" << endl << endl;
		}
	}
	return 0;
}
