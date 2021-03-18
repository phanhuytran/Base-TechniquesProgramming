//Project: BTH02_Bai6
#include <iostream>
using namespace std;

int main()
{
	int n;
	int dv;
	int chuc;
	int tram;
	int tong;
	int soDN;

	cout << "Nhap 1 so co 3 chu so: ";
	cin >> n;
	dv = n % 10;
	chuc = n / 10 % 10;
	tram = n / 10 / 10;
	tong = dv + chuc + tram;
	soDN = dv * 100 + chuc * 10 + tram;
	cout << "Tong 3 chu so la: " << tong << endl;
	cout << "So dao nguoc la: " << soDN << endl;

	return 0;
}