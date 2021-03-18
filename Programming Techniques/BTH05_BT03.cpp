//Project: BTH05_BT03.cpp
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

struct NhanVien
{
	string maNhanVien;
	string hoTen;
	int namVaoLam;
	int namSinh;
};
void nhapThongTin1NhanVien(NhanVien &a)
{
	cout << "+ Nhap ma nhan vien: "; getline(cin, a.maNhanVien);
	cout << "+ Nhap Ho va Ten nhan vien: "; getline(cin, a.hoTen);
	cout << "+ Nhap nam vao lam: "; cin >> a.namVaoLam;
	cout << "+ Nhap nam sinh: "; cin >> a.namSinh;
}
void xuatThongTin1NhanVien(NhanVien a)
{
	cout << "----- Thong Tin Nhan Vien -----\n";
	cout << "+ Ma nhan vien: " << a.maNhanVien << endl;
	cout << "+ Ho va Ten nhan vien: " << a.hoTen << endl;
	cout << "+ Nam vao lam: " << a.namVaoLam << endl;
	cout << "+ Nam sinh: " << a.namSinh << endl;
}
int tinhTuoiNhanVien(NhanVien a)
{
	time_t t = time(0);
	struct tm *Now = localtime(&t);
	return Now -> tm_year + 1900 - a.namSinh;
}
int tinhTuoiThamNienNhanVien(NhanVien a)
{
	time_t t = time(0);
	struct tm *Now = localtime(&t);
	return Now -> tm_year + 1900 - a.namVaoLam;
}
int main()
{
	system("color 0a");
	NhanVien a;
	nhapThongTin1NhanVien(a);
	xuatThongTin1NhanVien(a);
	cout << "+ Tuoi cua nhan vien " << a.hoTen << " la: " << tinhTuoiNhanVien(a);
	cout << "\n+ Tuoi tham nien lam viec cua nhan vien " << a.hoTen << " la: " << tinhTuoiThamNienNhanVien(a) << endl;
	return 0;
}