//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
bool Include(char* str, int i)
{
	if (str[i + 1] != 0) {
		if (str[i] == '*' && str[i + 1] == '*' && str[i + 2] == '*')
			return true;

			Include(str, i + 1);
	}
	else 
	return false;
}

char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 2] != 0)
	{
		if (str[i] == '*' && str[i + 1] == '*' && str[i + 2] == '*')
		{
			strcat_s(t, 10, "!!");
			return Change(dest, str, t + 2, i + 3);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << endl;
	//Include(str, 1);
	if (Include(str, 0))
		cout << "String has 3 * in a row" << endl;
	else
		cout << "String hasn`t 3 * in a row" << endl;
	cout << endl;
	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0);
	cout << "Modified string (param) : " << dest1 << endl;
	cout << "Modified string (result): " << dest2 << endl;
	return 0;
}