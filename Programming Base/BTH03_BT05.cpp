//Project: BTH3_BT05.cpp
#include <iostream>
using namespace std;

int main()
{
	double diem;
	cout << "Diem tich luy: ";
	cin >> diem;
	if (diem >= 9)
		cout << "Xep loai: Xuat sac" << endl;
	else
		if (diem >= 8)
			cout << "Xep loai: Gioi" << endl;
		else
			if (diem >= 7)
				cout << "Xep loai: Kha" << endl;
			else
				if (diem >= 6)
					cout << "Xep loai: Trung binh kha" << endl;
				else 
					if (diem >= 5)
						cout << "Xep loai: Trung binh" << endl;
					else
						cout << "Xep loai: Yeu" << endl;
	
	system("pause");
	return 0;
}