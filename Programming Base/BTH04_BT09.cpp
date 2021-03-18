//Project: BTH04_BT09.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n1, n2, dem = 0, i;
	cout << "Nhap vao 2 so nguyen duong: ";
	cin >> n1 >> n2;
	while (n1 > n2 || n1 <= 0 || n2 <= 0)
	{
		cout << "Ban da nhap sai! Vui long nhap lai: ";
		cin >> n1 >> n2;
	}
	i = n1;
	while (i <= n2)
	{
		if (10 % i == 0)
			dem += 1;
		i++;
	}
	cout << "So uoc cua 10 tu " << n1 << " den " << n2 << " la: " << dem << endl;
	return 0;
}