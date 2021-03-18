//Project: BTH05_BT11.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	system("color 0a");
	cout << "Nhap vao canh hinh vuong: ";
	cin >> n;
	if (n > 0)
	{
		//11a
		cout << "\n\n11a:\n";
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
				cout << "*";
			cout << endl;
		}
		cout << endl;
		//11b
		cout << "\n\n11b:\n";
		for (int i = 1; i <= n; i++)
		{
			int a = 0;
			for (int j = 1; j <= n; j++)
				if (i == 1 || i == n || j == 1|| j == n)
					cout << a++;
				else
					cout << "*";
			cout << endl;
		}
		cout << "\n";
	}
	else
		cout << "Ban da nhap sai!\n";
	return 0;
}