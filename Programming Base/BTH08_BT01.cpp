//Project: BTH08_BT01.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	const int MAXSIZE = 50;
	double alpha[MAXSIZE];
	for (int i = 0; i < MAXSIZE; i++)
		if (i < MAXSIZE / 2)
			alpha[i] = i * i;
		else
			alpha[i] = i * i * i;
	for (int i = 0; i < MAXSIZE; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << alpha[i] << "\t";
	}
	cout << endl;
	return 0;
}