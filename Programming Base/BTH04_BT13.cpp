//Project: BTH04_BT13.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n, max = INT_MIN, min = INT_MAX, tong = 0;
	cout << "Invite to play game: ";
	while (cin >> n)
	{
		tong += n;
		if (max < n)
			max = n;
		if (min > n)
			min = n;
	}
	cout << endl;
	cout << "Gia tri lon nhat la: " << max << endl << endl;
	cout << "Gia tri nho nhat la: " << min << endl << endl;
	cout << "Tong cua day so la: " << tong << endl << endl;
	return 0;
}