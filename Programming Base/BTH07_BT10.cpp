//Project: BTH07_BT10.cpp
#include <iostream>
using namespace std;

void hoanDoi2SN(int &a, int &b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}
void sapXep2SNGiamDan(int x, int y) //10a
{
	if (x > y)
		cout << "a. Ket qua sap xep 2 so nguyen giam dan la: " << x << " -> " << y << endl;
	else
	{
		hoanDoi2SN(x, y);
		cout << "a. Ket qua sap xep 2 so nguyen giam dan la: " << x << " -> " << y << endl;
	}
}
void sapXep3SNTangDan(int x, int y, int z) //10b
{
	if (x >= y && x >= z && y >= z)
		cout << "b. Ket qua sap xep 3 so nguyen tang dan la: " << z << " -> " << y << " -> " << x << endl;
	else
		if (x >= y && x >= z && z >= y)
			cout << "b. Ket qua sap xep 3 so nguyen tang dan la: " << y << " -> " << z << " -> " << x << endl;
		else
			if (y >= x && y >= z && x >= z)
				cout << "b. Ket qua sap xep 3 so nguyen tang dan la: " << z << " -> " << x << " -> " << y << endl;
			else
				if (y >= x && y >= z && z >= x)
					cout << "b. Ket qua sap xep 3 so nguyen tang dan la: " << x << " -> " << z << " -> " << y << endl;
				else
					if (z >= x && z >= y && x >= y)
						cout << "b. Ket qua sap xep 3 so nguyen tang dan la: " << y << " -> " << x << " -> " << z << endl;
					else
						if (z >= x && z >= y && y >= x)
							cout << "b. Ket qua sap xep 3 so nguyen tang dan la: " << x << " -> " << y << " -> " << z << endl;

}
void sapXep3SNGiamDan(int x, int y, int z) //10c
{
	if (x <= y && x <= z && y <= z)
		cout << "b. Ket qua sap xep 3 so nguyen giam dan la: " << z << " -> " << y << " -> " << x << endl;
	else
		if (x <= y && x <= z && z <= y)
			cout << "b. Ket qua sap xep 3 so nguyen giam dan la: " << y << " -> " << z << " -> " << x << endl;
		else
			if (y <= x && y <= z && x <= z)
				cout << "b. Ket qua sap xep 3 so nguyen giam dan la: " << z << " -> " << x << " -> " << y << endl;
			else
				if (y <= x && y <= z && z <= x)
					cout << "b. Ket qua sap xep 3 so nguyen giam dan la: " << x << " -> " << z << " -> " << y << endl;
				else
					if (z <= x && z <= y && x <= y)
						cout << "b. Ket qua sap xep 3 so nguyen giam dan la: " << y << " -> " << x << " -> " << z << endl;
					else
						if (z <= x && z <= y && y <= x)
							cout << "b. Ket qua sap xep 3 so nguyen giam dan la: " << x << " -> " << y << " -> " << z << endl;
}
int main ()
{
	system("color 0a");
	int m, n, p;
	char lc = 0;
	cout << "------------Menu------------\n" << "a. Sap xep 2 so nguyen giam dan.\n" << "b. Sap xep 3 so nguyen tang dan.\n" << "c. Sap xep 3 so nguyen giam dan.\n";
	cout << "Moi ban lua chon: ";
	cin >> lc;
	switch(lc)
	{
	case 'a':
		{
			cout << "Nhap so nguyen thu 1: ";
			cin >> m;
			cout << "Nhap so nguyen thu 2: ";
			cin >> n;
			sapXep2SNGiamDan(m, n);
			break;
		}
	case 'b':
		{
			cout << "Nhap so nguyen thu 1: ";
			cin >> m;
			cout << "Nhap so nguyen thu 2: ";
			cin >> n;
			cout << "Nhap so nguyen thu 3: ";
			cin >> p;
			sapXep3SNTangDan(m, n, p);
			break;
		}
	case 'c':
		{
			cout << "Nhap so nguyen thu 1: ";
			cin >> m;
			cout << "Nhap so nguyen thu 2: ";
			cin >> n;
			cout << "Nhap so nguyen thu 3: ";
			cin >> p;
			sapXep3SNGiamDan(m, n, p);
			break;
		}
	default:
		cout << "Ngoai kha nang thuc hien!\n";
	}
	return 0;
}