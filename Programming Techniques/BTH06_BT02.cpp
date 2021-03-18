//Project: BTH06_BT02.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("color 0a");
	int m;
	ifstream inFile;
	inFile.open("BT1.txt");
	if (inFile.is_open())
	{
		inFile >> m;
		inFile.close();
		cout << "Doc File thanh cong!\n";
		cout << m << endl;
	}
	else
		cout << "Khong mo duoc File de doc du lieu!\n";
	return 0;
}