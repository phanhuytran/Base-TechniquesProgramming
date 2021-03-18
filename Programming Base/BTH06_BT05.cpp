//Project: BTH06_BT05.cpp
#include <iostream>
using namespace std;

void xuatHinhVuong(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << "*";
		cout << endl;
	}
}
int main()
{
	int x;
	system("color 0a");
	cout << "Nhap vao canh hinh vuong: ";
	cin >> x;
	if (x <= 0)
		cout << "Band da nhap sai!\n";
	else
		xuatHinhVuong(x);
	return 0;
}