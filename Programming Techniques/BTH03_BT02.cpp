//ProjectL BTH03_BT02.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 30;
	int array[MAXSIZE];
	for (int i = 0; i < MAXSIZE; i++)
		array[i] = rand() % 10;
	int *p;
	p = array;
	cout << "Xuat cac gia tri luu tru trong mang bang con tro va ky phap do doi:\n";
	for (int offset = 0; offset < MAXSIZE; offset++)
		cout << "*(p + " << offset << ") = " << *(p + offset) << endl;
	cout << "\nXuat cac gia tri luu tru trong mang bang con tro va ky phap chi so:\n";
	for (int i = 0; i < MAXSIZE; i++)
		cout << "p[" << i << "] = " << p[i] << endl;
	return 0;
}