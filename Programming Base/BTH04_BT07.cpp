//Project: BTH4_BT07.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	system("color 0a");
	int a, b;
	int pt, lc;
	do {
	cout << endl << "-----Menu-----\n" << "1. Cong\n" << "2. Tru\n" << "3. Nhan\n" << "4. Chia\n" << "5. Thoat\n";
	cout << "Moi ban chon phep tinh: ";
	cin >> pt;
	switch(pt)
	{
	case 1:
		cout << "Nhap vao 2 so nguyen: ";
		cin >> a >> b;
		cout << "\nKet qua: " << a << " + " << b << " = " << a + b << endl << endl;
		break;
	case 2:
		cout << "Nhap vao 2 so nguyen: ";
		cin >> a >> b;
		cout << "\nKet qua: " <<  a << " - " << b << " = " << a - b << endl << endl;
		break;
	case 3:
		cout << "Nhap vao 2 so nguyen: ";
		cin >> a >> b;
		cout << "\nKet qua: " <<  a << " * " << b << " = " << a * b << endl << endl;
		break;
	case 4:
		cout << "Nhap vao 2 so nguyen: ";
		cin >> a >> b;
		if (b == 0)
			cout << "\nLoi chia 0!" << endl << endl;
		else
			cout << "\nKet qua: " <<  a << " / " << b << " = " << fixed << setprecision(2) << double(a) / b << endl << endl;
		break;
	case 5:
		cout << "\nChao tam biet! Hen gap lai!" << endl << endl;
		exit(0);
		break;
	default:
		cout << "\nNgoai kha nang thuc hien!" << endl << endl;
	}
	cout << "\n1. Tiep tuc\n" << "2. Ket thuc\n" << "Tuy chon: ";
	cin >> lc;
	if (lc >= 2 || lc < 1)
	{
		cout << "n\Chao tam biet! Hen gap lai!" << endl;
		exit(0);
	}
	} while (pt > 0 || pt <= 0);
	return 0;
}