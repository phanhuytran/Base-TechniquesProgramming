//Project: BTH08_BT06.cpp
#include <iostream>
using namespace std;

void nhap(int arr[], int arrSize);
void xuat(const int arr[], int arrSize);
bool tim(const int arr[], int arrSize, int x);
void daoNguoc(int arr[], int arrSize) //8d
{
	for(int i = 0; i < arrSize / 2; i++)
	{
		int tam = arr[i];
		arr[i] = arr[arrSize - 1 - i];
		arr[arrSize - 1 - i] = tam; 
	}
}
void xoa(int arr[], int& arrSize, int p) //8e
{
	if (p == arrSize)
		arrSize--;
	else
	{
		for (int i = p - 1; i < arrSize; i++)
			arr[i] = arr[i + 1];
		arrSize--;
	}
}
int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int arr[MAXSIZE], arrSize, x, p;
	do{
		cout << "Nhap so luong gia tri can dung: ";
		cin >> arrSize;
		if (arrSize < 1 || arrSize > MAXSIZE)
			cout << "Chi nhap so luong gia tri tu 1 den " << MAXSIZE << endl;
	} while (arrSize < 1 || arrSize > MAXSIZE);
	nhap(arr, arrSize); //8a
	cout << "Cac phan tu vua nhap vao mang la: ";
	xuat(arr, arrSize); //8b
	cout << "Nhap gia tri can tim: ";
	cin >> x;
	if (tim(arr, arrSize, x)) //8c
		cout << "Gia tri " << x << " ma ban can tim co trong mang\n";
	else
		cout << "Gia tri " << x << " ma ban can tim khong co trong mang\n";
	daoNguoc(arr, arrSize); //8d
	cout << "Cac phan tu sau khi duoc dao nguoc trong mang la: ";
	xuat(arr, arrSize);
	do{
		cout << "Nhap vi tri can xoa: ";
		cin >> p;
		if (p < 1 || p >= arrSize + 1)
			cout << "Chi xoa cac phan tu tu vi tri 1 den " << arrSize << endl;
	} while (p < 1 || p >= arrSize + 1);
	daoNguoc(arr, arrSize); //Dao nguoc ve vi tri cua mang ban dau
	xoa(arr, arrSize, p); //8e
	cout << "Cac phan tu hien tai trong mang la: ";
	xuat(arr, arrSize);
	return 0;
}
void nhap(int arr[], int arrSize) //8a
{
	int dem = 1;
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Nhap gia tri phan tu thu " << dem++ << ": a[" << i << "] = ";
		cin >> arr[i];
	}
}
void xuat(const int arr[], int arrSize) //8b
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i];
		if (i == arrSize - 1)
			cout << "";
		else
			cout << ", ";
	}
	cout << endl;
}
bool tim(const int arr[], int arrSize, int x) //8c
{
	for(int i = 0; i < arrSize ; i++)
		if(x == arr[i])
			return true;
	return false;
}