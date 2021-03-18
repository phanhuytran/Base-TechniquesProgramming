//Project: BTH3_BT15.cpp
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Nhap canh thu 1: ";
	cin >> a;
	cout << "Nhap canh thu 2: ";
	cin >> b;
	cout << "Nhap canh thu 3: ";
	cin >> c;
	if ((a + b < c) || (a + c < b) || (b + c < a))
		cout << "Ba canh cua hinh tam giac khong hop le" << endl;
	else
		if ((a == b) && ( a == c) && (b == c))
			cout << "Ket qua: Tam giac deu" << endl;
		else
			if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
				cout << "Ket qua: Tam gia vuong" << endl;
			else
				if ((a == b) || ( a == c) || (b == c))
					cout << "Ket qua: Tam giac can" << endl;
				else
					cout << "Ket qua: Tam giac thuong" << endl;


	system("pause");
	return 0;
}