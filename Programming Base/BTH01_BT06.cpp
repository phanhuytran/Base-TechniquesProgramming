// Bai thuc hanh 01: BTH01_Bai06.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Xin chao, ten toi la Hoa!\n";
	cout << "Ten ban la gi?\n";
	string line;
    getline(cin, line);
    cout << "Chao ban, " << line << endl;
	system("pause");
	return 0;
}