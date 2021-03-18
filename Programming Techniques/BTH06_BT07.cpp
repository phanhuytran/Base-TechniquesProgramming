//Project: BTH06_BT07.cpp
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	system("color 0a");
	ofstream outData;
	double hSL;
	cout << "Input: ";
	cin >> hSL;
	outData.open("BT7.txt");
	if (outData.is_open())
	{
		outData << fixed << setprecision(2) << hSL << endl;
		while (cin >> hSL && hSL != -1)
		{
			outData << fixed << setprecision(2) << hSL << endl;
		}
		outData.close();
		cout << "The opening is successful!\n";
	}
	else
		cout << "The opening failed!\n";
	return 0;
}