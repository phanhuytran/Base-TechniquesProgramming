//Project: BTH3_BT09.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a;
	int b;
	double kq;
	char pT;

	cout << "Nhap 2 so nguyen va 1 phep toan (+ - * /): ";
	cin >> a >> b >> pT;
	switch(pT)
	{
	case '+':
		kq = a + b;
		cout << a << " " << pT << " " << b << " = " << kq << endl;
		break;
	case '-':
		kq = a - b;
		cout << a << " " << pT << " " << b << " = " << kq << endl;
		break;
	case '*':
		kq = a * b;
		cout << a << " " << pT << " " << b << " = " << kq << endl;
		break;
	case '/':
		kq = a / double(b);
		if (b == 0)
			cout << "Loi chia 0" << endl;
		else
			cout << a << " " << pT << " " << b << " = " << fixed << setprecision(2) << kq << endl;
		break;
	default:
		cout << "Ngoai kha nang thuc hien" << endl;
	}
	
	system("pause");
	return 0;
}