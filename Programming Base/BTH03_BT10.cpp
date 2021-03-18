//Project: BTH3_BT10.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> n;
	if (n % 2)
		cout << "So " << n << " la so le" << endl;
	else
		cout << "So " << n << " la so chan" << endl;

	system("pause");
	return 0;
}