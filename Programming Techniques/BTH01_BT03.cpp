//Project: BTH01_BT03.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXROW = 15, MAXCOLUMN = 20;
	int array[MAXROW][MAXCOLUMN], r, c, m = 0, n = 0;
	//Check valid values
	do {
		cout << "You need to enter the row number: ";
		cin >> r;
		cout << "You need to enter the column number: ";
		cin >> c;
		if (r <= 0 || r > MAXROW || c <= 0 || c > MAXCOLUMN)
			cout << "You entered wrong. Please re-enter!\n";
	} while (r <= 0 || r > MAXROW || c <= 0 || c > MAXCOLUMN);
	//Enter data into array
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter to value a[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}
	//Export data in array
	cout << "The array has been stored: \n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << array[i][j] << "\t";
		cout << endl;
	}
	//Sum the values in the array
	int sum = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			sum += array[i][j];
	cout << "The sum of the values were stored in the array is: " << sum << endl;
	//Find the minimum value in the array & Find its location
	int min = array[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (min > array[i][j])
			{
				min = array[i][j];
				m = i;
				n = j;
			}
	cout << "The minimum value in the array is: " << min << ". It's in row " << m + 1 << " and column " << n + 1 << endl;
	//Find the maximum value in the array & Find its location
	int max = array[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (max < array[i][j])
			{
				max = array[i][j];
				m = i;
				n = j;
			}
	cout << "The maximum value in the array is: " << max << ". It's in row " << m + 1 << " and column " << n + 1 << endl;
	return 0;
}