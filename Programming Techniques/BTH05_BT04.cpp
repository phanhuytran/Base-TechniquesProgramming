//Project: BTH05_BT04.cpp
#include <iostream>
#include <string>
using namespace std;

struct SinhVien
{
	string mssv;
	string hoTen;
	int namSinh;
	double diemToan;
	double diemVan;
	double diemNgoaiNgu;
};
void nhapThongTin1SinhVien(SinhVien &a)
{
	cin.ignore();
	cout << "+ Nhap ma so sinh vien: "; getline(cin, a.mssv);
	cout << "+ Nhap Ho va Ten sinh vien: "; getline(cin, a.hoTen);
	cout << "+ Nhap nam sinh: "; cin >> a.namSinh;
	cout << "+ Nhap diem toan: "; cin >> a.diemToan;
	cout << "+ Nhap diem van: "; cin >> a.diemVan;
	cout << "+ Nhap diem ngoai ngu: "; cin >> a.diemNgoaiNgu;
}
void xuatThongTin1SinhVien(SinhVien a)
{
	cout << "+ Ma So Sinh Vien: " << a.mssv << endl;;
	cout << "+ Ho va Ten: " << a.hoTen << endl;
	cout << "+ Nam sinh: " << a.namSinh << endl;;
	cout << "+ Diem toan: " << a.diemToan << endl;
	cout << "+ Diem van: " << a.diemVan << endl;
	cout << "+ Diem ngoai ngu: " << a.diemNgoaiNgu << endl;;
}
void nhapThongTin1LopHoc(SinhVien *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
		nhapThongTin1SinhVien(*(a + i));
	}
}
void xuatThongTinSinhVienTheoYeuCau(SinhVien *a, int vt)
{
	xuatThongTin1SinhVien(a[vt - 1]);
}
double tinhDiemTrungBinh(SinhVien a)
{
	return ((a.diemToan + a.diemVan) * 2 + a.diemNgoaiNgu) / 5;
}
void xuatDiemTrungBinh(SinhVien *a, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "+ Ma So Sinh Vien: " << (a + i) -> mssv << endl;
		cout << "+ Ho va Ten: " << (a + i) -> hoTen << endl;
		cout << "+ Diem trung binh: " << tinhDiemTrungBinh(a[i]) << endl << endl;
	}
}
void xepLoai(SinhVien *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (tinhDiemTrungBinh(a[i]) >= 8)
			cout << "Sinh vien " << (a + i) -> hoTen << " xep loai Gioi\n";
		else
			if(tinhDiemTrungBinh(a[i]) >= 6.5 && tinhDiemTrungBinh(a[i]) < 8)
				cout << "Sinh vien " << (a + i) -> hoTen << " xep loai Kha\n";
			else
				if(tinhDiemTrungBinh(a[i]) >= 5 && tinhDiemTrungBinh(a[i]) < 6.5)
					cout << "Sinh vien " << (a + i) -> hoTen << " xep loai TB\n";
				else
					if(tinhDiemTrungBinh(a[i]) < 5)
						cout << "Sinh vien " << (a + i) -> hoTen << " xep loai Duoi TB\n";
	}
}
int main()
{
	system("color 0a");
	SinhVien *a;
	const int MAXSIZE = 45;
	int n, vt;
	do {
		cout << "Nhap so luong sinh vien: "; cin >> n;
		if (n <= 0 || n > MAXSIZE)
			cout << "Ban da nhap sai so luong sinh vien. Vui long nhap lai!\n";
	} while (n <= 0 || n > MAXSIZE);
	a = new SinhVien [n];
	nhapThongTin1LopHoc(a, n); cout << endl;
	cout << "Nhap so thu tu sinh vien ma ban muon tra cuu: "; cin >> vt;
	cout << "Ket qua tra cuu:\n";
	xuatThongTinSinhVienTheoYeuCau(a, vt);
	cout << endl;
	cout << "Diem trung binh cua sinh vien:\n";
	xuatDiemTrungBinh(a, n);
	cout << "Ket qua xep loai:\n";
	xepLoai(a, n);
	delete []a;
	a = nullptr;
	return 0;
}