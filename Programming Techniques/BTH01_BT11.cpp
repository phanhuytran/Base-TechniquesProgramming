//Project: BTH01_BT11.cpp
#include <iostream>
#include <Windows.h>
using namespace std;
const int MAXR = 14, MAXC = 7;

void ganChoNgoi(int a[][MAXC], int r, int c);
void xuatChoNgoi(int a[][MAXC], int r, int c);
bool kTViTri(int a[][MAXC], int r, int c, int vtr, int vtc);
void datCho(int a[][MAXC], int r, int c, int vtr, int vtc);
int main()
{
	int array[MAXR][MAXC], vtr, vtc, lc, n;
	ganChoNgoi(array, MAXR, MAXC);
	do {
		xuatChoNgoi(array, MAXR, MAXC);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		cout << "---------------------------o0o---------------------------\n\t\t1. Hang Thuong Gia\n\t\t2. Hang Pho Thong\n\t\t3. Hang Tiet Kiem\n\t\tMoi quy khach lua chon hang ghe: ";
		cin >> lc;
		switch (lc)
		{
		case 1:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				do {
					cout << "\t\tMoi quy khach chon cho ngoi o HANG THUONG GIA: \n\t\t1. Hang: ";
					cin	>> vtr;
					cout << "\t\t2. Day: ";
					cin >> vtc;
					if (vtr <= 0 || vtr > MAXR - 1 || vtc <= 0 || vtc > MAXC - 1)
						cout << "\t\tQuy khach da dat cho sai. Xin quy khach vui long dat lai!\n";
					else
						if (vtr < 0 || vtr > 2)
							cout << "\t\tQuy khach chi duoc chon cho ngoi o HANG THUONG GIA!\n";
						else
							if (kTViTri(array, MAXR, MAXC, vtr, vtc))
								cout << "\t\tCho ngoi ma quy khach dat da co nguoi!\n";
				} while (kTViTri(array, MAXR, MAXC, vtr, vtc) || vtr <= 0 || vtr > 2 || vtr > MAXR - 1 || vtc <= 0 || vtc > MAXC - 1);
				break;
			}
		case 2:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				do {
					cout << "\t\tMoi quy khach chon cho ngoi o HANG PHO THONG: \n\t\t1. Hang: ";
					cin >> vtr;
					cout << "\t\t2. Day: ";
					cin >> vtc;
					if (vtr <= 0 || vtr > MAXR - 1 || vtc <= 0 || vtc > MAXC - 1)
						cout << "\t\tQuy khach da dat cho sai. Xin quy khach vui long dat lai!\n";
					else
						if (vtr < 3 || vtr > 7)
							cout << "\t\tQuy khach chi duoc chon cho ngoi o HANG PHO THONG!\n";
						else
							if (kTViTri(array, MAXR, MAXC, vtr, vtc))
								cout << "\t\tCho ngoi ma quy khach dat da co nguoi!\n";
				} while (kTViTri(array, MAXR, MAXC, vtr, vtc) || vtr < 3 || vtr > 7 || vtr <= 0 || vtr > MAXR - 1 || vtc <= 0 || vtc > MAXC - 1);
				break;
			}
		case 3:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				do {
					cout << "\t\tMoi quy khach chon cho ngoi o HANG TIET KIEM: \n\t\t1. Hang: ";
					cin >> vtr;
					cout << "\t\t2. Day: ";
					cin >> vtc;
					if (vtr <= 0 || vtr > MAXR - 1 || vtc <= 0 || vtc > MAXC - 1)
						cout << "\t\tQuy khach da dat cho sai. Xin quy khach vui long dat lai!\n";
					else
						if (vtr < 8 || vtr > MAXR)
							cout << "\t\tQuy khach chi duoc chon cho ngoi o HANG TIET KIEM!\n";
						else
							if (kTViTri(array, MAXR, MAXC, vtr, vtc))
								cout << "\t\tCho ngoi ma quy khach dat da co nguoi!\n";
				} while (kTViTri(array, MAXR, MAXC, vtr, vtc) || vtr <= 0 || vtr < 8 || vtr > MAXR - 1 || vtc <= 0 || vtc > MAXC - 1);
				break;
			}
		default:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				cout << "\t\tNgoai kha nang thuc hien!\n";
				return 0;
			}
		}
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cout << "\n\t\tXin moi quy khach kiem tra cho ngoi da dat:\n";
		datCho(array, MAXR, MAXC, vtr, vtc);
		xuatChoNgoi(array, MAXR, MAXC);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "\n--------------------Dat them cho ngoi--------------------\n\t\t1. Tiep tuc\t 2. Ket thuc\n\t\tMoi quy khach lua chon: ";
		cin >> n;
		if (n != 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nChuc quy khach co chuyen bay an toan. Xin chao! Hen gap lai!\n";
			return 0;
		}
		system("cls");
	} while (n == 1);
}
void ganChoNgoi(int a[][MAXC], int r, int c) //Gia su chua cho nao da duoc dat
{
	for (int i = 1; i < r; i++)
		for (int j = 0; j < c; j++)
			a[i][j] = 0;
}
void xuatChoNgoi(int a[][MAXC], int r, int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "\n\t\tSo do cho ngoi cua may bay:\n\n\t\tA\tB\tC\tD\tE\tF\n\n";
	for (int i = 1; i < r; i++) 
	{
		for (int j = 0; j < c; j++) 
			if (j == 0)
				cout << "  Hang " << i << ":\t";
			else
				if (a[i][j] == 0)
					cout << "-\t" ;
				else
					cout << "X\t";
				cout << endl;
	}
}
bool kTViTri(int a[][MAXC], int r, int c, int vtr, int vtc)
{
	if (a[vtr][vtc] == 1)
		return true;
	return false;
}
void datCho(int a[][MAXC], int r, int c, int vtr, int vtc)
{
	if (!kTViTri(a, r, c, vtr, vtc))
		a[vtr][vtc] = 1;
}