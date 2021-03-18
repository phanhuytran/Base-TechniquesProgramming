//Project: BTH3_BT11.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> n;
	if (n > 0)
		cout << "So " << n << " la so duong" << endl;
	else
		if (n < 0)
			cout << "So " << n << " la so am" << endl;
		else
			cout << "So nguyen nay la so 0" << endl;

	system("pause");
	return 0;
}