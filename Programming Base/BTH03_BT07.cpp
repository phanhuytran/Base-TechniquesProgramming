//Project: BTH3_BT07.cpp
#include <iostream>
using namespace std;

int main()
{
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;
	if ((thang == 4) || (thang == 6) || (thang == 9) || (thang == 11))
		cout << "So ngay cua thang " << thang << " la 30 ngay" << endl;
	else
		if ((thang == 1) || (thang == 3) || (thang == 5) || (thang == 7) || (thang == 8) || (thang == 10) || (thang == 12))
			cout << "So ngay cua thang " << thang << " la 31 ngay" << endl;
		else 
			cout << "So ngay cua thang " << thang << " la 28 hoac 29 ngay" << endl;

	system("pause");
	return 0;
}