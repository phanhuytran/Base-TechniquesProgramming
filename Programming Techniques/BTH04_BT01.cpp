//Project: BTH04_BT01.cpp
#include <iostream>
using namespace std;

void inHoaDauTu(char *s)
{
	while (*s)
	{
		if (isspace(*s)) s++;
		else break;
	}
	if (*s)
	{
		*s = toupper(*s);
		s++;
	}
	while (*s)
	{
		if (isspace(*(s - 1)) && islower(*s))
			*s = toupper(*s);
		s++;
	}
}
int main()
{
	char s1[100], s2[100];
	cout << "Nhap chuoi thu 1: "; cin.getline(s1, 100);
	cout << "Nhap chuoi thu 2: "; cin.getline(s2, 100);
	if (strcmp(s1, s2) == 0)
		cout << "Hai chuoi s1 va s2 bang nhau\n";
	else
		if (strcmp(s1, s2) < 0)
			cout << "s1 nho hon s2\n";
		else
			cout << "s1 lon hon s2\n";
	cout << "Chuoi thu nhat truoc khi in hoa dau tu: " << s1 << endl;
	cout << "Chuoi thu hai truoc khi in hoa dau tu: " << s2 << endl;
	char *p = s1;
	inHoaDauTu(s1);
	cout << "Chuoi thu nhat sau khi in hoa dau tu: " << s1 << endl;
	char *q = s2;
	inHoaDauTu(s2);
	cout << "Chuoi thu nhat sau khi in hoa dau tu: " << s2 << endl;
	cout << "Ket qua sau khi noi hai chuoi s2 vao s1 la: ";
	strcat(s2, s1);
	cout << s2 << endl;
	return 0;
}