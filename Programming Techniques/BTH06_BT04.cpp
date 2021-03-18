//Project: BTH06_BT04.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("color 0a");
	ofstream outFile;
	char s[21];
	cout << "Nhap chuoi ky tu: ";
	cin.getline(s, 21);
	char *a = s;
	outFile.open("BT4.txt");
	if (outFile.is_open())
	{
		while (*a)
		{
			*a = toupper(*a);
			outFile << *a << endl;
			a++;
		}
		outFile.close();
		cout << "Ghi File thanh cong!\n";
	}
	else
		cout << "Khong mo duoc File de doc du lieu!\n";
	outFile.close();
	return 0;
}