#include <iostream>
using namespace std;
void nhap (int* a, int n)
{
	cout << "Nhap vao " << n << "phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << endl;
}
void xuat(int * a,int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}

	bool kTSCP(int x)
{
	if (sqrt(x * 1.0) * sqrt(x * 1.0) == x)
		return true;
	return false;
}
int demSCP(int *a, int n)
{
	int dem= 0;
	for (int i = 0; i < n; i++)
		if(kTSCP(a[i]))
			dem++;
	return dem;
}
void hoanDoi(int & x, int &  y)
{
	int * tam;
	tam = new int;
	*tam = x; 
	x = y;
	y = *tam;
	delete tam;
	tam = NULL;
}
void az(int * a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if(a[i] > a[j])
			hoanDoi(a[i],a[j]);
}
void za(int *a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if(a[i] < a[j])
			hoanDoi(a[i],a[j]);

}
void azza(int *a, int n)
{
	for (int i = n- 1; i >= n / 2; i--)
		for (int j = 0; j < n / 2; j++)
			if(a[i] < a[j])
				hoanDoi(a[i],a[j]);
for (int i = n - 1; i > n /  2; i--)
		for (int j = i; j > n / 2; j--)
			if(a[i] > a[j])
			hoanDoi(a[i],a[j]);
}
void gopMang(int *a, int n, int *b, int m, int *c)
{
	int j = 0;
	for(int i = 0; i < ( m + n); i++)
		if(i < n)
			c[i] = a[i];
		else
			c[i] = b[j++];
}
int main()
{
	int * a, *b, *c;
	int n, m;
	cout << "Nhap vao so luong phan tu thuc te mang: ";
	cin >> n;
	a = new int [n];
	nhap(a,n);
	cout << "Cac phan vua nhap cua mang la:\n\n        ";
	xuat(a,n);
	az(a,n);
	cout << "Mang sau khi sap sep tang dan la:\n\n       ";
	xuat (a,n);
	za(a,n);
	cout << "Mang sau khi sap sep giam dan la:\n\n       ";
	xuat (a,n);
	azza(a,n);
	cout << "Mang sau khi sap sep nua dau tang nua sau giam la:\n\n       ";
	xuat (a,n);
	cout << "Nhap vao so luong phan tu thuc te cua mang b: ";
	cin >> m;
	b = new int [m];
	nhap(b,m);
	cout << "  Cac phan tu ban dau cua b la:\n";
	xuat(b,m);
	c  =  new int  [m + n];
	gopMang(a,n,b,m,c);
	cout << "mang thu duoc sau khi gop 2 mang a va b la: \n";
	xuat(c,m+n);
	delete [] a;
	a = NULL;
	delete [] b;
	b = NULL;
	delete [] c;
	c = NULL;
	return 0;
}
