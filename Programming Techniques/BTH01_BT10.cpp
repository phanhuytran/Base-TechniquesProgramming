//Project: BTH01_BT10.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 10;
	int array[MAXSIZE][MAXSIZE], n, value = 1, maxr, maxc, minr, minc;
	//Check valid values
	do {
		cout << "You need to enter the square size: ";
		cin >> n;
		if (n < 2 || n > MAXSIZE)
			cout << "You entered wrong. Please re-enter!\n";
	} while (n < 2 || n > MAXSIZE);
	minr = minc = 0;
	maxr = maxc = n - 1;
	//Create a spiral zigzag
	while (value <= n * n)
	{
		//h1
		for (int i = minc; i <= maxc; i++)
			array[minr][i] = value++;
		minr++;
		//h2
		for (int i = minr; i <= maxr; i++)
			array[i][maxc] = value++;
		maxc--;
		//h3
		for (int i = maxc; i >= minc; i--)
			array[maxr][i] = value++;
		maxr--;
		for (int i = maxr; i >= minr; i--)
			array[i][minc] = value++;
		minc++;
	}
	//Export data in array
	cout << "Spiral zigzag was created is: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << array[i][j] << "\t";
		cout << endl;
	}
	return 0;
}