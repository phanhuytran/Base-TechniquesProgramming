//Project: BTH04_BT08.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	char hoTen[256];
	cout << "Nhap Ho va Ten: ";
	cin.getline(hoTen, 256);
	char *p = hoTen;
	cout << "Ho la: ";
	while (*p)
	{
		if (isspace(*p)) p++;
		else break;
	}
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
	cout << endl;
	char *q = hoTen;
	q = q + strlen(hoTen) - 1;
	while (*q)
	{
		if (isspace(*q)) q++;
		else break;
	}
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
	if (p < q)
	{
		cout << "Ten lot: ";
		while (p < q)
		{
			cout << *p;
			p++;
		}
		cout << endl;
	}
	cout << "Ten la: ";
	while (*q)
	{
		if (isspace(*q)) q++;
		else break;
	}
	while (*q)
	{
		cout << *q;
		q++;
	}
	cout << endl;
	return 0;
}