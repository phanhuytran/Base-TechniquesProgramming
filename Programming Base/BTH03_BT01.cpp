//Project: BTH3_BT01.cpp
#include <iostream>
using namespace std;

int main()
{
	double diemTB1MH;

	cout << "Diem trung binh mon hoc: ";
	cin >> diemTB1MH;
	if (diemTB1MH >= 5)
		cout << "Ket qua: Dau" << endl;
	else 
		cout << "Ket qua: Rot" << endl;

	return 0;
}