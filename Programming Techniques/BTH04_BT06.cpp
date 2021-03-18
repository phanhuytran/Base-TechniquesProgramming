//Project: BTH04_BT06.cpp
#include <iostream>
using namespace std;

int tinhSoNgayToiDa(int m, int y)
{
	int dmax = 0;
	switch(m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		dmax = 31; break;
	case 2:
		if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
			dmax = 29;
		else
			dmax = 28;
		break;
	default:
		dmax = 30;
	}
	return dmax;
}
bool kTraDMYHopLe(int d, int m, int y)
{
	if (y <= 0 || m <= 0 || m > 12 || d <= 0 || d > tinhSoNgayToiDa(m, y))
		return false;
	return true;
}
int tinhNgayCachNam(int d, int m, int y)
{
	int sum = d;
	for (int i = 1; i < m; i++)
		sum += tinhSoNgayToiDa(i, y);
	return sum;
}
int main()
{
	system("color 0a");
	int d, m, y;
	char ngay[3], thang[3], nam[5];
	do {
		cout << "Nhap ngay-thang-nam: ";
		cin.getline(ngay, 3, '-');
		cin.getline(thang, 3, '-');
		cin.getline(nam, 5);
		d = atoi(ngay); m = atoi(thang); y = atoi(nam);
		if (!kTraDMYHopLe(d, m, y))
			cout << "Ban da nhap sai. Vui long nhap lai\n";
	} while (!kTraDMYHopLe(d, m, y));
	cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay thu " << tinhNgayCachNam(d, m, y) << " trong nam\n";
}