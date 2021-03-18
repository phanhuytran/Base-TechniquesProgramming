//Project: BTH02_Bai12.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	system("color 0a");
	int cd;
	string s;
	cout << "Nhap vao mot chuoi ky tu: ";
	getline(cin, s);
	cd = s.length();
	cout << "Chieu dai cua chuoi la: " << cd << endl;
	return 0;
}