//Project: BTH06_BT01.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("color 0a");
	ofstream outFile;
	ifstream inFile;
	outFile.open("BaT1.txt");
	int a, b;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	if (outFile.is_open())
	{
		outFile << a + b << endl;
		outFile.close();
		cout << "Ghi File thanh cong!\n";
	}
	else
		cout << "Khong mo duoc File de ghi du lieu!\n";
	return 0;
}