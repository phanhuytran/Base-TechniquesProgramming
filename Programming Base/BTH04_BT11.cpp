//Project: BTH04_BT11.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0c");
	int n, i = 0, cs = 0, kq = 0, tam = 0;
	cout << "Nhap vap day so nhi phan: ";
	cin >> n;
	if (n >= 0)
	{
		tam = n;
		while (tam != 0)
		{
			cs = tam % 10;
			if (cs != 1 && cs != 0)
			{
				cout << "Ban da nhap sai he nhi phan!" << endl;
				exit(0);
			}
			kq = kq + cs * pow(2, double(i));
			tam /= 10;
			++i;
		}
		cout << "He thap phan tuong ung cua " << n << " la: "<< kq << endl;
	}
	else
		cout << "Ban da nhap sai he nhi phan!" << endl;
	return 0;
}