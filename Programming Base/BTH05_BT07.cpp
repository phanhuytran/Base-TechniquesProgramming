//Project: BTH05_BT07.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int h;
	cout << "Nhap vao chieu cao tam giac: ";
	cin >> h;
	if (h > 0)
	{
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= h; j++)
				if (i >= j)
					cout << "*";
				else
					cout << " ";
			cout << endl;
		}
	}
	else
		cout << "Ban da nhap sai!\n";
	return 0;
}