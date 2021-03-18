//Project: BTH05_BT10.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n1, n2, dem = 0, demC = 0, demL = 0, i;
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
		if (i % 2 == 0)
			demC += 1;
		if (i % 2 != 0)
			demL += 1;
		i++;
	}
	cout << "So uoc cua 10 tu " << n1 << " den " << n2 << " la: " << dem << endl;
	cout << "Co tat ca " << demC << " chu so chan" << endl;
	cout << "Co tat ca " << demL << " chu so le" << endl;
	return 0;
}