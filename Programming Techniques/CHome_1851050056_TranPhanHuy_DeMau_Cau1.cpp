//Project: CHome_1851050056_TranPhanHuy_DeMau_Cau1.cpp
#include <iostream>
using namespace std;

double tinhTong(int n)
{
	if (n == 1) return 1;
	return 1.0 / n + tinhTong(n - 1);
}
int demKyTuInHoa(char *s)
{
	int dem = 0;
	while (*s)
	{
		if (isupper(*s))
			dem++;
		s++;
	}
	return dem;
}
int main()
{
	system("color 0a");
	char s[51];
	cout << "Nhap chuoi ky tu: "; cin.getline(s, 51);
	char *p = s;
	cout << "Co tat ca " << demKyTuInHoa(p) << " ky tu In Hoa\n";
	int n;
	cout << "Nhap so nguyen n: "; cin >> n;
	cout << "Ket qua: " << tinhTong(n) << endl;
	return 0;
}