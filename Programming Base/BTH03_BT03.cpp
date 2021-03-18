//Project: BTH3_Bai03.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap vao mot so nguyen: ";
	cin >> n;
	if (n >= 0)
		cout << "Tri tuyet doi cua so nguyen la: " << n << endl;
	else
		cout << "Tri tuyet doi cua so nguyen la: " << -n << endl;

	system("pause");
	return 0;
}