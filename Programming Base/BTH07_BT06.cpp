//Project: BTH07_BT06.cpp
#include <iostream>
#include <iomanip>
using namespace std;

void menu()
{
	cout << "----MENU----\n" << "1. Cong\n" << "2. Tru\n" << "3. Nhan\n" << "4. Chia\n\n";
}
int cong (int a, int b)
{
	int tong = a + b;
	return tong;
}
int tru (int a, int b)
{
	int hieu = a - b;
	return hieu;
}
int nhan (int a, int b)
{
	int tich = a * b;
	return tich;
}
double chia (int a, int b)
{
	double thuong = a / (1.0 * b);
	return thuong;
}
int main()
{
	system("color 0a");
	int x, y, pt = 0;
	char lc = 0;
	do {
		menu();
		cout << endl;
		cout << "Nhap 2 so nguyen: ";
		cin >> x >> y;
		cout << "Chon (1-4): ";
		cin >> pt;
		switch(pt)
		{
		case 1:
			cout << "\n" << x << " + " << y << " = " << cong(x, y) << endl;
			break;
		case 2:
			cout << x << " - " << y << " = " << tru(x, y) << endl;
			break;
		case 3:
			cout << x << " x " << y << " = " << nhan(x, y) << endl;
			break;
		case 4:
			if (y != 0)
				cout << x << " : " << y << " = " << fixed << setprecision(2) << chia(x, y) << endl << endl;
			else
				cout << "Loi chia 0!\n\n";
			break;
		default:
			cout << "Ngoai kha nang thuc hien!\n";
		}
		cout << "Tiep tuc (C/K): ";
		cin >> lc;
		cout << endl;
		if (lc == 'k' || lc == 'K')
		{
			cout << "Tam biet! Hen gap lai!\n";
			return 0;
		}
	} while (lc == 'c' || lc == 'C');
	return 0;
}