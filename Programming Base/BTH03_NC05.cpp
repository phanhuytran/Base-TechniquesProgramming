//Project: BTH3_NC5.cpp
#include <iostream>
using namespace std;

int main()
{
	int d, m, y;
	int dMax = 0;
	int nd, nm, ny;
	cout << "Nhap ngay, thang, nam: ";
	cin >> d >> m >> y;
	switch(m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		dMax = 31;
		break;
	case 4: case 6: case 9: case 11:
		dMax = 30;
		break;
	case 2:
		if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
			dMax = 29;
		else
			dMax = 28;
		break;
	}
	if(d == dMax && m == 12 && y > 0)
	{
		nd = 1;
		nm = 1;
		ny = y + 1;
		cout << "Ngay hom sau la: " << nd << "-" << nm << "-" << ny << endl;
	}
	else
		if(d == dMax && m < 12 && y > 0)
		{
			nd = 1;
			nm = m + 1;
			ny = y;
			cout << "Ngay hom sau la: " << nd << "-" << nm << "-" << ny << endl;
		}
		else
			if(d < dMax && y > 0)
			{
				nd = d + 1;
				nm = m;
				ny = y;
				cout << "Ngay hom sau la: " << nd << "-" << nm << "-" << ny << endl;
			}
			else
				if(d > dMax || m < 1 || m > 12 || y <= 0)
					cout << "Ngay thang nam khong hop le!" << endl;

	system("pause");
	return 0;
}