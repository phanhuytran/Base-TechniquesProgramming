//Project: BTH08_BT11.cpp
#include <iostream>
#include <cmath>
using namespace std;

void nhap( int a[], int n)
{
	for (int i = n; i >= 0; i--)
	{
		cout << "Nhap vao he so cua x bac " << i << ": ";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
	{
		for (int i = n ; i >= 0; i--)
		{
			if (i == 1)
				cout << a[i] << "x";
			else
				if (i == 0)
					cout << a[i];
				else
					if (i > 1)
						cout << a[i] << "x^" << n--;
			if (i > 0)
				cout << " + ";
		}
		cout << endl;
	}
double tinhGTDT(int a[], int n, int x)
{
	double kq = 0;
	for ( int i = 0; i <= n; i++)
		kq = kq + pow(x * 1.0, i) * a[i];
	return kq;		
}
int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int a[MAXSIZE];
	int n, x;
	do {
		cout << "Nhap vao bac cua da thuc: ";
		cin >> n;
		if (n < 1 || n > MAXSIZE)
			cout << "Ban da nhap sai! Vui long nhap lai: ";
	} while(n < 1 || n > MAXSIZE);
	nhap(a, n);
	cout << "Ham so hien tai la: ";
	xuat(a, n);
	cout << "Nhap gia tri cua x: ";
	cin >> x;
	cout << "\nGia tri cua da thuc khi x = " << x << " la: " << tinhGTDT(a, n, x) << endl ;
	return 0;
}

	