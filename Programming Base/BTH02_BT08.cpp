//Project: BTH02_Bai8.cpp
#include <iostream>
using namespace std;

int main()
{
	double giaMua;
	double giaBan;

	cout << "Nhap gia mua: ";
	cin >> giaMua;
	giaBan = giaMua + giaMua * 0.6;
	cout << "Gia ban la :" << giaBan << endl;

	return 0;
}