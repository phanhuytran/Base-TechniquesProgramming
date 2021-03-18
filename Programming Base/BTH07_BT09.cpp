//Project: BTH07_BT09.cpp
#include <iostream>
using namespace std;

bool kTNamNhuan(int y)
{
	if (y % 400 == 0|| (y % 4 == 0 && y % 100 != 0))
		return true;
	return false;
}
int tinhSoNgayTrongThang(int m, int y)
{
	int dMax;
	switch(m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		dMax = 31;
		break;
	case 4: case 6: case 9: case 11:
		dMax = 30;
		break;
	case 2:
		if (kTNamNhuan(y) == true)
			dMax = 29;
		else
			dMax = 28;
		break;
	default:
		cout << "Ngoai kha nang thuc hien!\n";
	}
	return dMax;
}
bool kTNgayHopLe (int d, int m, int y)
{
	bool kT = true; //Gia su ngay hop le
	if (y <= 0) //Kiem tra nam
		kT = false;
	if (m < 1 || m > 12) //Kiem tra thang
		kT = false;
	if (d > tinhSoNgayTrongThang(m, y) || d < 1) //Kiem tra ngay
		kT = false;
	return kT;
}
int tinhSoNgayTrongNam(int d, int m, int y)
{
	int dem = d;
	for (int i = 1; i <= m - 1; i++)
		dem += tinhSoNgayTrongThang(i, y);
	return dem;
}
int main()
{
	system("color 0a");
	int d, m, y;
	cout << "Nhap ngay thang nam: ";
	cin >> d >> m >> y;
	if (kTNgayHopLe(d, m, y))
	{
		int count = tinhSoNgayTrongNam(d, m, y);
		cout << "3 gia tri cua ngay-thang-nam la " << d << "-" << m << "-" << y << " thi ket qua la " << count << " ngay\n";
	}
	else
		cout << "Ngay, thang, nam khong hop le!\n";
	return 0;
}