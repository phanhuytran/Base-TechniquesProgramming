//Project: BTH05_BT01.cpp
#include <iostream>
#include <string>
using namespace std;

struct PhongBan
{
	string maPhongBan;
	string tenPhongBan;
};
void nhapThongTin1PhongBan(PhongBan &a)
{
	cout << "+ Nhap ma phong ban: "; getline(cin, a.maPhongBan);
	cout << "+ Nhap ten phong ban: "; getline(cin, a.tenPhongBan);
}
void xuatThongTin1PhongBan(PhongBan a)
{
	cout << "--- Thong Tin Phong Ban ---\n";
	cout << "+ Ma phong ban: " << a.maPhongBan << endl;
	cout << "+ Ten Phong ban: " << a.tenPhongBan << endl;
}
int main()
{
	system("color 0a");
	PhongBan a;
	nhapThongTin1PhongBan(a);
	xuatThongTin1PhongBan(a);
	return 0;
}