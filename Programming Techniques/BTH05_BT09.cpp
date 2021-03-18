//Project: BTH05_BT09.cpp
#include <iostream>
using namespace std;

class phanSo
{
private:
	int tuso, mauso;
public:
	int getts();
	int getms();
	void setts(int a);
	void setms(int b);
	phanSo tong(phanSo ps1, phanSo ps2);
	phanSo hieu(phanSo ps1, phanSo ps2);
	phanSo tich(phanSo ps1, phanSo ps2);
	phanSo thuong(phanSo ps1, phanSo ps2);
};
int phanSo::getts()
{
	return tuso;
}
int phanSo::getms()
{
	return mauso;
}
void phanSo::setts(int a)
{
	tuso = a;
}
void phanSo::setms(int b)
{
	mauso = b;
}
phanSo phanSo::tong(phanSo ps1, phanSo ps2)
{
	phanSo kq;
	kq.setts(ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso);
	kq.setms(ps1.mauso * ps2.mauso);
	return kq;
}
phanSo phanSo::hieu(phanSo ps1, phanSo ps2)
{
	phanSo kq;
	kq.setts(ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso);
	kq.setms(ps1.mauso * ps2.mauso);
	return kq;
}
phanSo phanSo::tich(phanSo ps1, phanSo ps2)
{
	phanSo kq;
	kq.setts(ps1.tuso * ps2.tuso);
	kq.setms(ps1.mauso * ps2.mauso);
	return kq;
}
phanSo phanSo::thuong(phanSo ps1, phanSo ps2)
{
	phanSo kq;
	kq.setts(ps1.tuso * ps2.mauso);
	kq.setms(ps1.mauso * ps2.tuso);
	return kq;
}
int main()
{
	system("color 0a");
	phanSo ps1, ps2, kq;
	int ts1, ms1, ts2, ms2;
	cout << "Nhap tu so va mau so cho phan so thu 1: "; cin >> ts1 >> ms1;
	cout << "Nhap tu so va mau so cho phan so thu 2: "; cin >> ts2 >> ms2;
	ps1.setts(ts1);
	ps1.setms(ms1);
	ps2.setts(ts2);
	ps2.setms(ms2);
	kq = kq.tong(ps1, ps2);
	cout << "Tong hai phan so la: " << kq.getts() << "/" << kq.getms() << endl;
	kq = kq.hieu(ps1, ps2);
	cout << "Hieu hai phan so la: " << kq.getts() << "/" << kq.getms() << endl;
	kq = kq.tich(ps1, ps2);
	cout << "Tich hai phan so la: " << kq.getts() << "/" << kq.getms() << endl;
	kq = kq.thuong(ps1, ps2);
	cout << "Thuong hai phan so la: " << kq.getts() << "/" << kq.getms() << endl;
	return 0;
}