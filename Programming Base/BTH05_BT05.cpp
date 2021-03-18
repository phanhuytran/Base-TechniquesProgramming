//Project: BTH05_BT05.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	system("color 0a");
	int n1, n2, i, dem = 0;
	bool kT;
	cout << "Nhap vao 2 so nguyen duong: ";
	cin >> n1 >> n2;
	while (n1 >= n2 || n1 <= 0 || n2 <= 0)
	{
		cout << "Ban da nhap sai! Vui long nhap lai: ";
		cin >> n1 >> n2;
	}
	for (i = n1; i <= n2; i++)
	{
		kT = true;
		if (i < 2)
			kT = false;
		else
			for (int j = 2; j <= sqrt(i * 1.0); j++)
				if (i % j == 0)
				{
					kT = false;
					break;
				}
				if (kT)
					dem++;
	}
	cout << "Co tat ca " << dem << " so nguyen to tu " << n1 << " den " << n2 << endl;
	return 0;
}