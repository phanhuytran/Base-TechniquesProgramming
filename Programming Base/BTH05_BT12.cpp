//Project: BTH05_BT12.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int h;
	cout << "Nhap vao chieu cao: ";
	cin >> h;
	if (h > 0)
	{
		//12a
		cout << "\n\n12a:\n";
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= h; j++)
				if (i == j || i == h || j == 1)
					cout << "*";
				else
					cout << " ";
			cout << endl;
		}
		//12b
		cout << "\n\n12b:\n";
		for (int i = h - 1; i >= 0; i--)
		{
			for (int j = 0; j < h; j++)
				if (i <= j)
					cout << "*";
				else
					cout << " ";
			cout << endl;
		}
		//12c
		cout << "\n\n12c:\n";
		for (int i = h - 1; i >= 0; i--)
		{
			for (int j = 0; j < h; j++)
				if (i >= j)
					cout << "*";
				else
					cout << " ";
			cout << endl;
		}
		//12d
		cout << "\n\n12d:\n";
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= h; j++)
				if (i <= j)
					cout << "*";
				else
					cout << " ";
			cout << endl;
		}
		//12e
		cout << "\n\n12e:\n";
		for (int i = h - 1; i >= 0; i--)
		{
			for (int j = 0; j < h; j++)
				if (i <= j)
					cout << "* ";
				else
					cout << " ";
			cout << endl;
		}
		cout << "\n\n";
	}
	else
		cout << "Ban da nhap sai!\n";
	return 0;
}