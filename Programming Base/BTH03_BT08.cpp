//Project: BTH3_BT08.cpp
#include <iostream>
using namespace std;

int main()
{
	int thang;
	int nam;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
	if ((thang == 4) || (thang == 6) || (thang == 9) || (thang == 11))
		cout << "So ngay cua thang " << thang << " nam " << nam << " la 30 ngay" << endl;
	else
		if ((thang == 1) || (thang == 3) || (thang == 5) || (thang == 7) || (thang == 8) || (thang == 10) || (thang == 12))
			cout << "So ngay cua thang " << thang << " nam " << nam << " la 31 ngay" << endl;
		else 
			if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
				cout << "So ngay cua thang " << thang << " nam " << nam << " la 29 ngay" << endl;
			else
				cout << "So ngay cua thang " << thang << " nam " << nam << " la 28 ngay" << endl;
	
	system("pause");
	return 0;
}