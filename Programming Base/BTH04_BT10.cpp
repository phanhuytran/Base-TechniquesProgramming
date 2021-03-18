//Project: BTH04_BT10.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n, i = 2;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (n > 0)
	{
		cout << "Ket qua: " << n << " = ";
		while (n > 1)
		{
			if (n % i == 0)
			{
				cout << i;
				n /= i;
				if (n > 1)
					cout << " x ";
			}
			else
				++i;
		}
		cout << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}