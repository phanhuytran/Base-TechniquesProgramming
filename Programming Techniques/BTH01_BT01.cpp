//Project: BTH01_BT01.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXROW = 3, MAXCOLUMN = 4;
	int array[MAXROW][MAXCOLUMN] = {{8, 4, -1, 5}, {2, 2, 6 , 9}, {11, 2, 5, 4}};
	cout << "Mang da duoc luu tru la: \n\n";
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOLUMN; j++)
			cout << array[i][j] << "\t";
		cout << "\n\n\n";
	}
	return 0;
}