//Project: BTH3_NC2.cpp
#include <iostream>
using namespace std;

int main()
{
	double in, out;
	double tL;
	cout << "Nhap gio vao ca: ";
	cin >> in;
	cout << "Nhap gio ra ca: ";
	cin >> out;
	if(in >= 6 && in < 12 && out > 12 && out <=18)
	{
		tL = (12 - in) * 6000 + (out - 12) * 7500;
		cout << "Tien luong cua cong nhan la: " << tL << " VND" << endl;
	}
	else
		if(in < 6 && out > 12 && out <= 18)
		{
			tL = (12 - 6) * 6000 + (out - 12) * 7500;
			cout << "Tien luong cua cong nhan la: " << tL << " VND" << endl;
		}
		else
			if(in >= 6 && in < 12 && out > 18)
			{
				tL = (12 - in) * 6000 + (18 - 12) * 7500;
				cout << "Tien luong cua cong nhan la: " << tL << " VND" << endl;
			}
			else
				if(in < 6 && out > 18)
				{
					tL = (12 - 6) * 6000 + (18 - 12) * 7500;
					cout << "Tien luong cua cong nhan la: " << tL << " VND" << endl;
				}
	return 0;
}