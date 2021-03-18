//Project: CHome_1851050056_TranPhanHuy_DeMau_Cau4.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("color 0a");
	ofstream outData;
	ifstream inData;
	int a, b, c;
	cout << "Nhap 3 so nguyen: "; cin >> a >> b >> c;
	outData.open("BaiTap.txt");
	if (outData.is_open())
	{
		outData << a << endl << b << endl << c << endl;
		outData.close();
		cout << "Ghi File thanh cong\n";
	}
	else
		cout << "Khong mo duoc File de ghi du lieu\n";
	inData.open("BaiTap.txt");
	if (inData.is_open())
	{
		if (a > 0 && b > 0 && c > 0)
			cout << "Co tat ca 3 so duong\n";
		else
			if (a > 0 && b > 0 && c <= 0 || a > 0 && c > 0 && b <= 0 || c > 0 && b > 0 && a <= 0)
				cout << "Co tat ca 2 so duong\n";
			else
				if (a > 0 && b <= 0 && c <= 0 || b > 0 && a <= 0 && c <= 0 || c > 0 && a <= 0 && b <= 0)
					cout << "Chi co 1 so duong\n";
		if (a < 0 && b < 0 && c < 0)
			cout << "Co tat ca 3 so am\n";
		else
			if (a < 0 && b < 0 && c >= 0 || a < 0 && c < 0 && b >= 0 || c < 0 && b < 0 && a >= 0)
				cout << "Co tat ca 2 so am\n";
			else
				if (a < 0 && b >= 0 && c >= 0 || b < 0 && a >= 0 && c >= 0 || c < 0 && a >= 0 && b >= 0)
					cout << "Chi co 1 so am\n";
		if (a == 0 && b == 0 && c == 0)
			cout << "Co tat ca 3 so khong am khong duong\n";
		else
			if (a == 0 && b == 0 && c != 0 || a == 0 && c == 0 && b != 0 || b == 0 && c == 0 && a != 0)
				cout << "Co tat ca 2 so khong am khong duong\n";
			else
				if (a == 0 && b != 0 && c != 0 || b == 0 && a != 0 && c != 0 || c == 0 && a != 0 && b != 0 )
					cout << "Chi co 1 so khong am khong duong\n";
	}
	return 0;
}