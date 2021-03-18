//Project: BTH01_BT05.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 100;
	int array[MAXSIZE][MAXSIZE], n;
	//Check valid values
	do {
		cout << "You need to enter the level of the matrix: ";
		cin >> n;
		if (n <= 0 || n > MAXSIZE)
			cout << "You entered wrong. Please re-enter!\n";
	} while (n <= 0 || n > MAXSIZE);
	//Enter data into array
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter to value a[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}
	//Export data in array
	cout << "The level " << n << " matrix has been stored: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << array[i][j] << "\t";
		cout << endl;
	}
	//Calculate the sum of the values on the main diagonal of the matrix
	int sum1 = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == j)
				sum1 += array[i][j];
	cout << "The sum of the values on the main diagonal of the level " << n << " matrix is: " << sum1 << endl;
	//Calculate the sum of the values on the sub-diagonal of the matrix
	int sum2 = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i + j == n - 1)
				sum2 += array[i][j];
	cout << "The sum of the values on the main sub-diagonal of the level " << n << " matrix is: " << sum2 << endl;
	return 0;
}