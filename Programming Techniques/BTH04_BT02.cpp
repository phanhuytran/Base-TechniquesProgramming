//Project: BTH04_BT02.cpp
#include <iostream>
using namespace std;

void xuatHo(char *p)
{
	while (*p)
	{
		if (isspace(*p)) p++;
		else break;
	}
	while (*p)
	{
		if (isspace(*p)) break;
		else cout << *p; p++;
	}
}
void xuatTen(char *q, char *p)
{
	while (*q)
	{
		if (isspace(*q)) q--;
		else break;
	}
	while (*q)
	{
		if (isspace(*q)) break;
		else q--;
	}
	while (*p)
	{
		if (isspace(*p)) p++;
		else break;
	}
	while (*q)
	{
		while (*q)
		{
			if (isspace(*q)) q++;
			else break;
		}
		cout << *q;
		q++;
	}
}
int main()
{
	system("color 0a");
	char hoTen[256];
	cout << "Nhap Ho, Ten: "; cin.getline(hoTen, 256);
	char *p = hoTen;
	cout << "Ho la: ";
	xuatHo(p);
	cout << endl;
	char *q = hoTen;
	q = q + strlen(hoTen) - 1;
	cout << "Ten la: ";
	xuatTen(q, p);
	cout << endl;
	return 0;
}