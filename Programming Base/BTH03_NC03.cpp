//Project: BTH3_NC3.cpp
#include <iostream>
using namespace std;

int main()
{
	double m;
	double kq;
	cout << "Trong luong cua hang hoa: ";
	cin >> m;
	if(m <= 0 || m > 100)
		cout << "Qua gioi han trong luong hang hoa" << endl;
	else
		if(m > 0 && m <= 10)
		{
			kq = m * 5000;
			cout << "Tien loi la: " << kq << endl;
		}
		else
			if(m > 10 && m <= 20)
			{
				kq = m * 5000;
				cout << "Tien loi la: " << kq << endl;
			}
			else
				if(m > 20 && m <= 50)
				{
					kq = m * 9000 + 0.02 * m * 9000;
					cout << "Tien loi la: " << kq << endl;
				}
				else
					if(m > 50)
					{
						kq = m * 10000 + 0.04 * m * 10000;
						if(kq >= 1000000)
							cout << "Tien loi la: 1000000" << endl;
						else
							cout << "Tien loi la: " << kq << endl;
					}
	return 0;
}