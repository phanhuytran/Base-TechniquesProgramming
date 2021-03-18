//Project: BTH04_BT03.cpp
#include <iostream>
using namespace std;

int demSoKhoangTrang(char *s)
{
	int dem = 0;
	while (*s)
	{
		if (isspace(*s))
			dem++;
		s++;
	}
	return dem;
}
int demKyTuCShoacCC(char *s)
{
	int dem = 0;
	while (*s)
	{
		if (isalnum(*s))
			dem++;
		s++;
	}
	return dem;
}
int demKyTuInHoa(char *s)
{
	int dem = 0;
	while (*s)
	{
		if (isupper(*s))
			dem++;
		s++;
	}
	return dem;
}
int demKyTuInThuong(char *s)
{
	int dem = 0;
	while (*s)
	{
		if (islower(*s))
			dem++;
		s++;
	}
	return dem;
}
void chuyenChuoiSangInHoa(char *s)
{
	while (*s)
	{
		if (islower(*s))
			*s = toupper(*s);
		s++;
	}
}
void chuyenChuoiSangInThuong(char *s)
{
	while (*s)
	{
		if (isupper(*s))
			*s = tolower(*s);
		s++;
	}
}
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
		if (isspace(*(s - 1)) && isalnum(*s))
			*s = toupper(*s);
		s++;
	}
}
int demTu(char *s)
{
	int dem = 0;
	while (*s)
	{
		if (isspace(*s)) s++;
		else break;
	}
	if (*s)
	{
		dem++;
		s++;
	}
	while (*s)
	{
		if (isspace(*(s - 1)) && isalnum(*s))
			dem++;
		s++;
	}
	return dem;
}
int main()
{
	char s[256];
	cout << "Nhap chuoi: "; cin.getline(s, 256);
	char *p = s;
	cout << "Co tat ca " << demSoKhoangTrang(p) << " Khoang Trang\n";
	cout << "Co tat ca " << demKyTuCShoacCC(p) << " ky tu Chu So hoac Chu Cai\n";
	cout << "Co tat ca " << demKyTuInHoa(p) << " ky tu In Hoa\n";
	cout << "Co tat ca " << demKyTuInThuong(p) << " ky tu In Thuong\n";
	chuyenChuoiSangInHoa(p);
	cout << "Chuoi sau khi da duoc chuyen sang in hoa: " << p << endl;
	chuyenChuoiSangInThuong(p);
	cout << "Chuoi sau khi da duoc chuyen sang in thuong: " << p << endl;
	inHoaDauTu(p);
	cout << "Chuoi sau khi da duoc chuyen sang dang in hoa ky tu dau tu: " << p << endl;
	cout << "Co tat ca " << demTu(p) << " tu\n";
	return 0;
}