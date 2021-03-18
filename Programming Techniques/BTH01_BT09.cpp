//Project: BTH01_BT09.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 10;
	int array[MAXSIZE][MAXSIZE], n;
	//Check valid values
	do {
		cout << "You need to enter the square size: ";
		cin >> n;
		if (n < 2 || n > MAXSIZE)
			cout << "You entered wrong. Please re-enter!\n";
	} while (n < 2 || n > MAXSIZE);
	//Create a shape zigzag
	int value = 1;
	for (int i = 0; i < n; i++)
	if (i % 2 == 0)
		for (int j = 0; j < n; j++)
			array[j][i] = value++;
	else
		for (int j = n - 1; j >= 0; j--)
			array[j][i] = value++;
	//Export data in array
	cout << "The array has been stored: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << array[i][j] << "\t";
		cout << endl;
	}
	return 0;
}