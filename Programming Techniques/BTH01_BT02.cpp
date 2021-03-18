//Project: BTH01_BT02.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXROW = 3, MAXCOLUMN = 4;
	int array[MAXROW][MAXCOLUMN];
	int i = 0;
	while (i < MAXROW)
	{
		int j = 0;
		while (j < MAXCOLUMN)
		{
			cout << "Nhap gia tri a[" << i << "][" << j << "]: ";
			cin >> array[i][j];
			j++;
		}
		i++;
	}
	cout << "Mang da duoc luu tru la: \n\n";
	int a = 0;
	while (a < MAXROW)
	{
		int b = 0;
		while (b < MAXCOLUMN)
		{
			cout << array[a][b] << "\t";
			b++;
		}
		cout << "\n\n\n";
		a++;
	}
	return 0;
}