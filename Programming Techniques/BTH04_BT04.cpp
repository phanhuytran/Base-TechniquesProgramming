//Project: BTH04_BT04.cpp
#include <iostream>
using namespace std;

bool kTPali(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;
	while (left < right)
	{
		if (tolower(s[left]) == tolower(s[right]))
		{
			left++;
			right--;
		}
		else
			return false;
	}
	return true;
}
int main()
{
	char s[100];
	cout << "Nhap chuoi: ";
	cin.getline(s, 100);
	char *p = s;
	if (kTPali(p))
		cout << "Chuoi " << p << " la chuoi doi xung\n";
	else
		cout << "Chuoi " << p << " khong phai la chuoi doi xung\n";
	return 0;
}