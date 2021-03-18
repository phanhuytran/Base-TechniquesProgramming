//Project: BTH04_BT05.cpp
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	system("color 0a");
	char p[11];
	int i = 0, dem = 0;
	do {
		cout << "Nhap password: ";
		while ((p[i] = getch()) != 13 && ++i < 11)
			cout << "X";
		p[i] = '\0';
		if (!strcmp(p, "Philiptran"))
		{
			cout << "\nDang nhap thanh cong\n";
			break;
		}
		else
		{
			dem++;
			if (dem == 3)
				cout << "\nBan da nhap sai password qua 3 lan\n";
			else
				cout << "\nSai password. Nhap lai\n";

		}
	}
	while (dem < 3);
	return 0;
}