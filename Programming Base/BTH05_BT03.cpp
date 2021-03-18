//Project: BTH05_BT03.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, S1 = 0;
	double S2 = 0, S3 = 0;
	cout << "Nhap vao 1 so nguyen duong n: ";
	cin >> n;
	if (n > 0)
	{
		//Tinh tong S1
		for (int i = 1; n >= i; i++)
			S1 = S1 + i * i;
		cout << "\na. S1 = " << S1 << endl;

		//Tinh tong S2
		for (int i = 1; n >= i; i++)
			S2 = S2 + 1 / double(i);
		cout << "\nb. S2 = " << fixed << setprecision(2) << S2 << endl;

		//Tinh tong S3
		for (int i = 1; n >= i; i++)
			S3 = S3 + 1 / double(2 * i - 1);
		cout << "\nc. S3 = " << fixed << setprecision(2) << S3 << endl << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}