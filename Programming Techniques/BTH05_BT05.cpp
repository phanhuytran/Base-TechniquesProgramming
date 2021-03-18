//Project: BTH05_BT05.cpp
#include <iostream>
using namespace std;

struct NTN
{
	int ngay;
	int thang;
	int nam;
};
struct Sach
{
	char tenSach[21];
	char tenTacGia[21];
	NTN time;
};
void nhapThongTin1QuyenSach(Sach &a)
{
	cin.ignore();
	cout << "+ Nhap ten sach: "; cin.getline(a.tenSach, 20);
	cout << "+ Nhap ten tac gia: "; cin.getline(a.tenTacGia, 20);
	do {
		cout << "+ Nhap ngay san xuat: "; cin >> a.time.ngay;
		cout << "+ Nhap thang san xuat: "; cin >> a.time.thang;
		cout << "+ Nhap nam san xuat: "; cin >> a.time.nam;
		if (a.time.nam <= 0 || a.time.thang <= 0 || a.time.thang > 12 || a.time.ngay <= 0 || a.time.ngay > 31 || a.time.thang == 2 && a.time.ngay > 29 || a.time.thang == 4 && a.time.ngay > 30 || a.time.thang == 6 && a.time.ngay > 30 || a.time.thang == 9 && a.time.ngay > 30 || a.time.thang == 11 && a.time.ngay > 30)
			cout << "Ban da nhap sai ngay-thang-nam san xuat. Vui long nhap lai!\n";
	} while (a.time.nam <= 0 || a.time.thang <= 0 || a.time.thang > 12 || a.time.ngay <= 0 || a.time.ngay > 31 || a.time.thang == 2 && a.time.ngay > 29 || a.time.thang == 4 && a.time.ngay > 30 || a.time.thang == 6 && a.time.ngay > 30 || a.time.thang == 9 && a.time.ngay > 30 || a.time.thang == 11 && a.time.ngay > 30);
}
void xuatThongTin1QuyenSach(Sach a)
{
	cout << "+ Ten sach: " << a.tenSach << endl;
	cout << "+ Ten tac gia: " << a.tenTacGia << endl;
	cout << "+ Ngay-thang-nam san xuat: " << a.time.ngay << "-" << a.time.thang << "-" << a.time.nam << endl;
}
void nhapThongTinSach(Sach *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin quyen sach thu " << i + 1 << ":\n";
		nhapThongTin1QuyenSach(*(a + i));
	}
}

void xuat(Sach *a, int n)
{
	cout << endl;
	cout << "--- Thong Tin Sach cua Tac Gia Tran Dung ---\n";
	int dem = 0 ;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].tenTacGia, "Tran Dung") == 0)
		{
			dem++;
			xuatThongTin1QuyenSach(a[i]);
		}
	}
	if (dem == 0)
		cout << "Khong co quyen sach nao cua tac gia Tran Dung\n";
}
int main()
{
	system("color 0a");
	Sach *a;
	int n;
	do {
		cout << "Nhap so luong sach can nhap thong tin: "; cin >> n;
		if (n <= 0 || n > 50)
			cout << "Ban da nhap sai so luong sach. Vui long nhap lai!\n";
	} while (n <= 0 || n > 50);
	a = new Sach[n];
	nhapThongTinSach(a, n);
	xuat(a, n);
	delete []a;
	a = nullptr;
	return 0;
}