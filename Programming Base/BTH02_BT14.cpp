//Project: BTH02_Bai14.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ktThuong;
	char ktHoa;

	cout << "Nhap ky tu thuong: ";
	cin >> ktThuong;
	ktHoa = ktThuong - 32;
	cout << "Ky tu in hoa la: " << ktHoa << endl;

	system("pause");
	return 0;
}