//Project: BTH3_NC4.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	int pt;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Cac phep tinh:" << endl;
	cout << "1. Cong" << endl;
	cout << "2. Tru" << endl;
	cout << "3. Nhan" << endl;
	cout << "4. Chia" << endl;
	cout << "5. Tim so du" << endl;
	cout << "6. Thoat" << endl;
	cout << "Moi ban chon: ";
	cin >> pt;
	switch (pt)
	{
	case 1:
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	case 2:
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	case 3:
		cout << a << " * " << b << " = " << a * b << endl;
		break;
	case 4:
		if(b != 0)
			cout << a << " / " << b << " = " << fixed << setprecision(2) << double(a) / b << endl;
		else
			cout << "Loi chia 0" << endl;
		break;
	case 5:
		cout << a << " % " << b << " = " << a % b << endl;
		break;
	case 6:
		exit(0);
		break;
	default:
		cout << "Ngoai kha nang thuc hien" << endl;
	}
	return 0;
}