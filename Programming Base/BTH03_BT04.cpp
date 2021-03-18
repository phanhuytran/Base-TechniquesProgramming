//Project: BTH3_BT04.cpp
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap vao so thu nhat: ";
	cin >> a;
	cout << "Nhap vao so thu hai: ";
	cin >> b;

	if (a > b)
		cout << "Ket qua: " << a << " > " << b << endl;
	else 
		if (a < b)
			cout << "Ket qua: " << a << " < " << b << endl;
		else 
			cout << "Ket qua: " << a << " = " << b << endl;
	
	system("pause");
	return 0;
}