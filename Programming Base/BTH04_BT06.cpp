//Project: BTH04_BT06.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0c");
	int n;
	bool laNguyenTo = true;
	cout << "Nhap vao 1 so nguyen n: ";
	cin >> n;
	if (n >= 2)
	{
		int i = 2;
		while (i <= sqrt(1.0 * n))
		{
			if (n % i == 0)
				laNguyenTo = false;
			i++;
		}
	}
	else
		laNguyenTo = false;
	if (laNguyenTo == true)
		cout << n << " la so nguyen to" << endl;
	else
		cout << n << " khong la so nguyen to" << endl;
	return 0;
}