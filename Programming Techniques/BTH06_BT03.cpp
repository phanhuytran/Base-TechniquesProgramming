//Project: BTH06_BT03.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("color 0a");
	ofstream outFile;
	ifstream inFile;
	outFile.open("BT3.txt");
	int a, b, c;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	if (outFile.is_open())
	{
		outFile << a << " # " << b << " # " << c << endl;
		outFile.close();
		cout << "Ghi File thanh cong!\n";
	}
	else
		cout << "Khong mo duoc File de ghi du lieu!\n";
	inFile.open("BT1.txt");
	if (inFile.is_open())
	{
		inFile >> a; inFile.ignore();
		inFile >> b; inFile.ignore();
		inFile >> c; inFile.ignore();
		cout << "Ket qua trung binh cong la: " << double((a + b + c) / 3.0) << endl;
		inFile.close();
	}
	else
		cout << "Khong mo duoc File de doc du lieu!\n";
	return 0;
}