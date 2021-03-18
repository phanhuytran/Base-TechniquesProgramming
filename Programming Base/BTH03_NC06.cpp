//Project: BTH3_NC6.cpp
#include <iostream>
using namespace std;

int main()
{
	int s, m, h;
	int ns, nm, nh;
	cout << "Nhap gio, phut, giay: ";
	cin >> h >> m >> s;
	if(h >= 24 || m >= 60 || s >= 60)
		cout << "Gio, phut, giay khong hop le!" << endl;
	else
	{
		if(s == 59 && m == 59 && h == 23)
		{
			ns = 0;
			nm = 0;
			nh = 0;
			cout << "Gio sau do 1 giay la: " << nh << "0:" << nm << "0:" << ns << "0" << endl;
		}
		else
			if(s == 59 && m == 59)
			{
				ns = 0;
				nm = 0;
				nh = h + 1;
				cout << "Gio sau do 1 giay la: " << nh << ":" << nm << "0:" << ns << "0" << endl;
			}
			else
				if (s == 59)
				{
					ns = 0;
					nm = m + 1;
					nh = h;
					cout << "Gio sau do 1 giay la: " << nh << ":" << nm << ":" << ns << "0" << endl;
				}
				else
					if (s < 59)
					{
						ns = s + 1;
						nm = m;
						nh = h;
						cout << "Gio sau do 1 giay la: " << nh << ":" << nm << ":" << ns << endl;
					}
	}
	return 0;
}