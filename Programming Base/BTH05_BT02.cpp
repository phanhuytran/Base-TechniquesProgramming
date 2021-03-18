//Project: BTH05_BT02.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n = 0, tong = 0, count = 0, a;
	cout << "Ban can bao nhieu so: ";
	cin >> a;
	do {
		cout << "Nhap vao so nguyen thu " << ++count << ": ";
		cin >> n;
		tong = tong + n;
		if (a == count)
			break;
	} while (n >= 0 || n < 0);
	
	cout << "Tong " << a << " so vua nhap la: " << tong << endl;
	return 0;
}