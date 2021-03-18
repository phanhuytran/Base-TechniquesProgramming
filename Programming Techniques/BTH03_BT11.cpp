#include <iostream>
using namespace std;
void nhap(int *a, int n);
void xuat(int *a, int n);
double tinhGT(int *a, int n, int x);
int main()
{
	int *a;
	int n,x;
	cout << "Ban muon tinh bieu thuc bat may: ";
	cin >> n;
	a = new int [n];
	nhap(a, n);
	cout <<  "Da thuc cua ban la: \n";
	xuat(a, n);
	cout << "Moi ban nhap vao gia tri x de tinh gia tri cua bieu thuc: ";
	cin >> x;
	cout << "Gia tri cua bieu thuc la: " << tinhGT(a,n,x) << endl;
	return 0;
}
void nhap(int *a, int n)
{
	for (int i = n; i >= 0; i--)
	{
		if(i == n)
			do{
				cout << "Nhap vao he so cua x^" << i << ": ";
				cin >> a[i];
				if(a[i] == 0)
				{
					system("cls");
					cout << "Ban da nhap he so cua X^" << i << " = " << a[i] << endl;
						cout << "He so cua X bac cao nhat phai khac khong. Ban da nhap sai! Nhap lai.\n";
				}
		}while(a[i] == 0);
		else 
		{
			cout << "Nhap vao he so cua x^" << i << ": ";
				cin >> a[i];
		}
	}
	cout << endl;
}
void xuat(int *a, int n)
{
	for (int i = n; i >=0; i--)
	{
		if(i == n && a[i] > 0)
			cout << a[i] << "X^" << i ;
		if(a[i] < 0)
			cout << " - " << abs(a[i]) <<"X^" << i;
		else
			if(a[i] > 0)
				cout << " + " << a[i] <<"X^" << i;
			else;
	}
	cout << endl;
}
double tinhGT(int *a, int n, int x)
{
	double tong = 0;
	for(int i = 0; i <= n; i++)
		tong += a[i] * pow(x*1.0,i);
	return tong;
}
