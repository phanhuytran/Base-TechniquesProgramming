//Project: BTH07_BT04=7.cpp
#include <iostream>
#include <string>
using namespace std;

bool kTKyTuInHoa(char h)
{
	if (h >= 'A' && h <= 'Z')
		return true;
	return false;
}
bool kTKyTuInThuong(char t)
{
	if (t >= 'a' && t <= 'z')
		return true;
	return false;
}
int main()
{
	system("color 0a");
	string s;
	int demCH = 0, demCT = 0;
	cout << "Nhap chuoi: ";
	getline(cin , s);
	for (int i = 0; i < s.length(); i++)
	{
		if (kTKyTuInHoa (s.at(i)))
			demCH++;
		else
		{
			if (kTKyTuInThuong (s.at(i)))
				demCT++;
		}
	}
	cout << "Trong chuoi " << s << " co tat ca " << demCH << " ky tu in hoa va " << demCT << " ky tu in thuong\n";
	return 0;
}