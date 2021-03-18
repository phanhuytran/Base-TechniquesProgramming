//Project: BTH05_BT06.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int d, r;
	cout << "Nhap vao chieu dai: ";
	cin >> d;
	cout << "Nhap vao chieu rong: ";
	cin >> r;
	if (d > 0 || r > 0 || d > r)
	{
		for (int i = 1; i <= d; i++)
		{
			for (int j = 1; j <= r; j++)
				cout << "*";
			cout << endl;
		}
	}
	else
		cout << "Ban da nhap sai!\n";
	return 0;
}