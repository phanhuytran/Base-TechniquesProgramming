//CHome_1851050056_TranPhanHuy_DeTK_Cau01.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int soHS, soB, soGT, soGN;
	cout << "Nhap so luong hoc sinh: ";
	cin >> soHS;
	if (soHS > 0)
	{
		if (soHS % 2 == 0)
			soB = soHS / 2 ;
		else
			soB = soHS / 2 + 1;
		soGT = soHS * 2;
		soGN = soHS;
		cout << "So luong ban hoc can: " << soB << endl;
		cout << "So luong giay thi can: " << soGT << endl;
		cout << "So luong giay nhap can: " << soGN << endl;
	}
	else
		cout << "Ban da nhap sai!" << endl;
	return 0;
}