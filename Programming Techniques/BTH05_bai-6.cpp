// bai 6
#include<iostream>
#include<string>
using namespace std;
const int MAX = 30;

struct SanPham
{
	char maSanPham[11];
	string tenSanPham;
	double donGia;
	int soLuong;
};

void nhap1SP( SanPham &a)
{
	cin.ignore();
	cout << " nhap ten san pham: ";
	getline(cin, a.tenSanPham);
	cout << " nhap ma san pham: ";
	cin >> a.maSanPham;
	cout << " nhap don gia: ";
	cin >> a.donGia;
	cout << " nhap so luong ton kho: ";
	cin >> a.soLuong;
}

void xuat1SP( SanPham a)
{
	cout << " ten san pham: " << a.tenSanPham << endl;
	cout << " ma san pham: " << a.maSanPham << endl;
	cout << " don gia san pham: " << a.donGia << endl;
	cout << " so luong ton kho: " << a.soLuong << endl;
}

void nhapDSSP ( SanPham *a, int n)
{
	for ( int i = 0; i < n; i++)
	{
		cout << " - nhap thong tin san pham thu " << i + 1 << ":\n";
		nhap1SP(a[i]);
	}
}

void xuatDSSP ( SanPham *a, int n)
{
	for ( int i = 0; i < n; i++ )
	{
		cout << " => san pham thu " << i + 1 << ": \n ";
		xuat1SP(a[i]);
	}
}

void sapXepTang ( SanPham *a, int n)
{
	for ( int i = 0; i < n - 1; i++)
		for ( int j = i + 1; j < n; j++ )
			if ( a[i].soLuong > a[j].soLuong )
			{ 
				SanPham tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
}

void sanPhamSua( SanPham *a, int vtSua)
{
	int chon;
	string x;
	cout << " ban co muon sua thong tin san pham ko (co or khong): ";
	cin >> x;
	cout << endl;
	if ( x == "co" || x == "khong")
	{
		if( x == "co")
		do{
			do{
				cout << " ban vui long chon loai thong tin muon sua: \n"
					<< "1. ma san pham \n"
					<< "2. ten san pham \n"
					<< "3. don gia cua san pham \n"
					<< "4. so luong ton kho \n"
					<< "5. sua tat ca \n"
					<< "6. thoat \n"
					<< " ban chon: ";
				cin >> chon;
				if( chon <= 0 || chon > 6)
					cout << " nhap sai, hay nhap tu 1 den 6 \n";
			}while (chon >= 1 && chon > 6);
		switch(chon)
		{
		case 1:
			cin.ignore();
			cout << " nhap ma san pham: ";
			cin.getline((a + vtSua -1 ) -> maSanPham, 10);
			break;
		case 2:
			cin.ignore();
			cout << " nhap ten san pham:";
			getline(cin, (a + vtSua -1) -> tenSanPham);
			break;
		case 3:
			cout << " nhap don gia san pham: ";
			cin >> (a + vtSua -1) -> donGia;
			break;
		case 4:
			cout << " nhap so luong ton kho: ";
			cin >> (a + vtSua -1) -> soLuong;
			break;
		case 5:
			nhap1SP(*(a + vtSua -1));
			break;
		default:
			cout << " chao tam biet \n";
		}
		}while( chon >= 1 && chon <= 5);
		else
			cout << " moi ban den noi dung ke tiep \n";
	}
	else
		cout << " nhap sai ki tu \n";
}

void xoaSanPham( SanPham *a, int vtXoa, int &n)
{
	for ( int i = vtXoa - 1; i < n; i++)
		*(a + i) = *(a + i + 1 );
	n-- ;
}

int main()
{
	SanPham *a;
	int n, vtSua, vtXoa; 
	string o;
	do{
		cout << " nhap so luong: " ;
		cin >> n;
		if( n <= 0 || n > MAX)
			cout << " nhap sai. nhap lai \n";
	}while( n <= 0 || n > MAX );
	a = new SanPham [n];
	cout << " == NHAP THONG TIN SAN PHAM ==\n";
	nhapDSSP(a, n);
	cout << endl;
	system("cls");
	cout << " == THONG TIN NHUNG SAN PHAM VUA NHAP ==\n";
	xuatDSSP(a, n);
	cout << endl;
	sapXepTang(a, n);
	cout << endl;
	cout << " SAP XEP SAN PHAM THEO SO LUONG TANG DAN \n";
	xuatDSSP(a, n);
	cout << endl;
	do{
		cout << " nhap thong tin san pham can sua: ";
		cin >> vtSua;
		if ( vtSua <= 0 || vtSua > n)
			cout << " nhap sai so luong san pham hien co. nhap lai \n";
	}while( vtSua <= 0 || vtSua > n);
	cout << endl;
	cout <<" NHAP LAI SAN PHAM SUA \n";
	sanPhamSua(a, vtSua);
	system("cls");
	cout << " SAU KHI SAN PHAM DUOC CHINH SUA \n";
	xuatDSSP(a, n);
	cout << endl;
	cout <<" ban co muon xoa san pham nao khong ( co or khong): ";
	cin >> o;
	if( o == "co")
	{
		cout << " nhap san pham ma ban muon xoa: ";
		cin >> vtXoa;
		xoaSanPham(a, vtXoa, n);
		system("cls");
		xuatDSSP(a, n);
	}
	else
		cout << " khong co san pham can xoa \n";
	delete [] a;
	a = nullptr;
	return 0;
}