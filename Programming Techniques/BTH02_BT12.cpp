//Project: BTH02_BT11.cpp
//Tim gia tri lon nhat va gia tri nho nhat cua mang 1 chieu luu tru so nguyen
#include <iostream>
using namespace std;

int timMax(int array[], int n)
{
	if (n == 1) return array[0];
	if (timMax(array, n - 1) > array[n - 1]) return timMax(array, n - 1); else
		return array[n - 1];
}
int timMin(int array[], int n)
{
	if (n == 0) return -1;
	if (n == 1) return array[0]; else
	{
		if (array[n - 1] < timMin(array, n - 1)) return array[n - 1]; else
			return timMin(array, n - 1);
	}
}
int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int array[MAXSIZE], n;
	cout << "Nhap so luong gia tri can dung: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << " a[" << i << "]: ";
		cin >> array[i];
	}
	cout << "Mang 1 chieu da duoc luu tru la: ";
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << "\nGia tri lon nhat trong mang 1 chieu la: " << timMax(array, n) << endl;
	cout << "Gia tri nho nhat trong mang 1 chieu la: " << timMin(array, n) << endl;
	return 0;
}