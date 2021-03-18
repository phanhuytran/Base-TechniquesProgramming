//Project: BTH02_Bai13
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ktHoa;
	char ktThuong;

	cout << "Nhap ky ten in hoa: ";
	cin >> ktHoa;
	ktThuong = ktHoa + 32;
	cout << "Ky tu thuong la: " << ktThuong << endl;

	system("pause");
	return 0;
}