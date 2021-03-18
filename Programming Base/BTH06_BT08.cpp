//Project: BTH06_BT08.cpp
#include <iostream>
using namespace std;

int tinhChuViHV(int n)
{
	int cv;
	cv = 4 * n;
	return cv;
}
int tinhDienTichHV(int n)
{
	int dt;
	dt = n * n;
	return dt;
}
void xuatHV(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (i == 1 || i == n || j == 1|| j == n)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
}
int main()
{
	system("color 0a");
	int c;
	cout << "Nhap canh hinh vuong: ";
	cin >> c;
	cout << "\n";
	if (c > 0)
	{
		cout << "a. Chu vi hinh vuong la : " << tinhChuViHV(c) << endl << endl;
		cout << "b. Dien tich hinh vuong la : " << tinhDienTichHV(c) << endl << endl;
		cout << "c. \n";
		xuatHV(c);
		cout << endl;
	}
	else
		cout << "Ban da nhap sai!\n\n";
	return 0;
}