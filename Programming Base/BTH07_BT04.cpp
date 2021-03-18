//Project: BTH07_BT04.cpp
#include <iostream>
#include <string>
using namespace std;

bool kTKyTuCS(char s)
{
	if (s >= '0' && s <= '9')
		return true;
	return false;
}
bool kTKyTuCC(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return true;
	return false;
}
int main()
{
	system("color 0a");
	string s;
	int demCS = 0, demCC = 0;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (kTKyTuCS (s.at(i)))
			demCS++;
		if (kTKyTuCC (s.at(i)))
			demCC++;
	}
	cout << "Trong chuoi " << s << " co tat ca " << demCS << " ky tu chu so va " << demCC << " ky tu chu cai\n";
	return 0;
}